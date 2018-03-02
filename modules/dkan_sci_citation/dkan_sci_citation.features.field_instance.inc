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
  // 'paragraphs_item-sci_citation-field_dkan_cite_bibtex'.
  $field_instances['paragraphs_item-sci_citation-field_dkan_cite_bibtex'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste a BibTex entry here. (Examples: <a href="http://www.bibtex.org/Format/" target="_blank">Bibtex Format Guide</a>)',
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
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_hidden',
        'settings' => array(),
        'type' => 'field_hidden_text_plain',
        'weight' => 0,
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
    'label' => 'Citation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_citation-field_dkan_cite_doi'.
  $field_instances['paragraphs_item-sci_citation-field_dkan_cite_doi'] = array(
    'bundle' => 'sci_citation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a DOI name in the form: <b>10.1000/123456</b>',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bibtex');
  t('Citation');
  t('DOI');
  t('Enter a DOI name in the form: <b>10.1000/123456</b>');
  t('Paste a BibTex entry here. (Examples: <a href="http://www.bibtex.org/Format/" target="_blank">Bibtex Format Guide</a>)');

  return $field_instances;
}
