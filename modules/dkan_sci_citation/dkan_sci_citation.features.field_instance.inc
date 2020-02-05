<?php

/**
 * @file
 * dkan_sci_citation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dkan_sci_citation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-sci_citation-field_alt_object_id'.
  $field_instances['paragraphs_item-sci_citation-field_alt_object_id'] = array(
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_alt_object_id',
    'label' => 'Alternate Object ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_citation-field_dkan_cite_bibtex'.
  $field_instances['paragraphs_item-sci_citation-field_dkan_cite_bibtex'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the APA citation manually by typing or pasting it into this field. (Examples: <a href="http://www.bibtex.org/Format/" target="_blank">Bibtex Format Guide</a>)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_dkan_cite_bibtex',
    'label' => 'Bibtex',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_citation-field_dkan_cite_data'.
  $field_instances['paragraphs_item-sci_citation-field_dkan_cite_data'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If no DOI available, enter a valid APA citation using plain text, HTML or Markdown.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dkan_sci_citation',
        'settings' => array(),
        'type' => 'dkan_sci_cite',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_dkan_cite_data',
    'label' => 'Citation Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_citation-field_dkan_cite_doi'.
  $field_instances['paragraphs_item-sci_citation-field_dkan_cite_doi'] = array(
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a DOI name in the form: <b>10.1000/123456</b> to autopopulate the article citation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_dkan_cite_doi',
    'label' => 'DOI',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternate Object ID');
  t('Bibtex');
  t('DOI');
  t('Enter a DOI name in the form: <b>10.1000/123456</b> to autopopulate the article citation.');
  t('Enter the APA citation manually by typing or pasting it into this field. (Examples: <a href="http://www.bibtex.org/Format/" target="_blank">Bibtex Format Guide</a>)');
  t('Free Text');
  t('Use this if no DOI is available. You can enter text with HTML and/or markdown or json in a valid citation format.');

  return $field_instances;
}
