<?php

trait DkanSciHarvestTrait {

  /**
   *
   */
  public function createSciMetadata(stdClass &$row, $dataset, $science_metadata = NULL) {
    if (!isset($dataset->nid) || !isset($dataset->type) || $dataset->type != 'dataset') {
      throw new \Exception("Invalid dataset provided for science metadata.");
    }
    if (!isset($science_metadata)) {
      $science_metadata = new ParagraphsItemEntity(array(
        'bundle' => 'science_metadata',
        'field_name' => 'field_metadata_extended',
      ));
      $science_metadata->is_new = TRUE;
      $science_metadata->setHostEntity('node', $dataset);
      $science_metadata->save(TRUE);
    }
    else {
      if (get_class($science_metadata) != 'ParagraphsItemEntity') {
        throw new \Exception("Invalid science metadata entity provided.");
      }
    }

    $this->sciMetadataAuthors($science_metadata, $row);
    $this->sciMetadataFundSource($science_metadata, $row);
    $this->sciMetadataMethodCitations($science_metadata, $row);
    if (!empty($row->doi)) {
      $science_metadata->field_sci_doi[LANGUAGE_NONE][0]['value'] = $row->doi;
    }
    if (!empty($row->specific_product_type)) {
      $science_metadata->field_sci_product_type[LANGUAGE_NONE][0]['value'] = $row->specific_product_type;
    }
    if (!empty($row->equipment_or_software_used)) {
      $science_metadata->field_equipment_or_software_used[LANGUAGE_NONE] = $row->equipment_or_software_used;
    }
    if (!empty($row->purpose)) {
      $science_metadata->field_sci_intended_use[LANGUAGE_NONE] = $row->purpose;
    }
    if (!empty($row->useLimitations)) {
      $science_metadata->field_use_limitations[LANGUAGE_NONE] = $row->useLimitations;
    }
    if (!empty($row->related_content)) {
      $science_metadata->field_sci_related_content[LANGUAGE_NONE] = $row->related_content;
    }
    if (!empty($row->cited_datasets)) {
      $science_metadata->field_sci_dataset_citation[LANGUAGE_NONE] = $row->cited_datasets;
    }

    $science_metadata->save(TRUE);
  }

  /**
   * @param $entity
   * @param object $row
   */
  protected function sciMetadataAuthors(&$science_metadata, stdClass $row) {
    $science_metadata->field_sci_author = NULL;
    if (is_array($row->authors)) {
      foreach ($row->authors as $author) {
        $sci_author = new ParagraphsItemEntity(array(
          'field_name' => 'field_sci_author',
          'bundle' => 'sci_author',
        ));
        $sci_author->setHostEntity('paragraphs_item', $science_metadata);
        $sci_author->is_new = TRUE;
        $sci_author->revision = TRUE;
        $sci_author->archived = 0;

        if (empty($author['individualName'])) {
          $sci_author->field_sci_author_name[LANGUAGE_NONE][]['value'] = $author['organisationName'];
          $sci_author->field_sci_auth_is_organization[LANGUAGE_NONE][]['value'] = TRUE;
        }
        else {
          $sci_author->field_sci_author_name[LANGUAGE_NONE][]['value'] = $author['individualName'];
        }
        $sci_author->save(TRUE);
      }
    }
  }

  /**
   * @todo Get DOI for new terms from dkan_sci_fundref
   *
   * @param $entity
   * @param object $row
   */
  protected function sciMetadataFundSource(&$science_metadata, stdClass $row) {
    /** Expect $row->fundref_projects to be an Array of fundref projects each
     * project is an keyed array  with 'source' and 'project_number'.
     */
    if (is_array($row->fundref_projects) && !empty($row->fundref_projects)) {
      $fundref_vocabulary = 'dkan_sci_fundref';

      foreach ($row->fundref_projects as $fundref_project) {
        $sci_funding_source = new ParagraphsItemEntity(array(
          'field_name' => 'field_funding_sources',
          'bundle' => 'sci_funding_source',
        ));
        $sci_funding_source->setHostEntity('paragraphs_item', $science_metadata);
        $sci_funding_source->is_new = TRUE;
        $sci_funding_source->revision = TRUE;
        $sci_funding_source->archived = 0;

        if (!empty($fundref_project['source'])) {
          // This will only return the first match, or will create the taxonomy
          // term.
          $source_term = $this->createTax($fundref_project['source'], $fundref_vocabulary);
          $sci_funding_source->field_sci_fundref[LANGUAGE_NONE][]['tid'] = $source_term->tid;
        }
        if (!empty($fundref_project['project_number'])) {
          $sci_funding_source->field_sci_project_grant_number[LANGUAGE_NONE][]['value'] = $fundref_project['project_number'];
        }
        $sci_funding_source->save(TRUE);
      }
    }
  }

  /**
   * Attach method citations to science metatdata paragraph.
   *
   * @param $sci_metadata
   *   The paragraph object to attach the citations to
   * @param $row
   *   The current migration row.
   */
  protected function sciMetadataMethodCitations($sci_metadata, $row) {
    if (isset($row->method_citations)) {
      foreach ($row->method_citations as $citation) {
        $this->addCitation($sci_metadata, 'field_citation_methods', $citation);
      }
    }
  }

  /**
   *
   * @param $adc_metadata
   *   The adc metadata paragraph entity
   * @param $field_name
   *  The adc metadata field to add the citation to.
   * @param array $cite
   *  Associative array with optional 'citation' and 'doi' keys
   *
   * @throws Exception
   */
  protected function addCitation($adc_metadata, $field_name, array $cite) {
    $citation_paragraph = new ParagraphsItemEntity(array(
        'field_name' => $field_name,
        'bundle' => 'sci_citation',
    ));
    if (!empty($cite['citation']) || !empty($cite['doi'])) {
      if (!empty($cite['citation'])) {
        $citation_paragraph->field_dkan_cite_data[LANGUAGE_NONE][0]['value'] = $cite['citation'];
      }
      if (!empty($cite['doi'])) {
        $citation_paragraph->field_dkan_cite_doi[LANGUAGE_NONE][0]['value'] = $cite['doi'];
      }
      $citation_paragraph->is_new = true;
      $citation_paragraph->setHostEntity('paragraphs_item', $adc_metadata);
      $citation_paragraph->save(TRUE);
    }
  }
}