<?php
/**
 * @file
 * dkan_sci_search.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dkan_sci_search_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_file_content'.
  $field_bases['field_file_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_content',
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

  return $field_bases;
}
