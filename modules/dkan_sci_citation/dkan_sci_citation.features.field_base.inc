<?php
/**
 * @file
 * dkan_sci_citation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dkan_sci_citation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_dkan_cite_bibtex'.
  $field_bases['field_dkan_cite_bibtex'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dkan_cite_bibtex',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_dkan_cite_data'.
  $field_bases['field_dkan_cite_data'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dkan_cite_data',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(
      'max_length' => 10000,
    ),
    'translatable' => 0,
    'type' => 'field_hidden_text_long',
  );

  // Exported field_base: 'field_dkan_cite_doi'.
  $field_bases['field_dkan_cite_doi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dkan_cite_doi',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
