<?php
/**
 * @file
 * dkan_sci_fundref.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dkan_sci_fundref_taxonomy_default_vocabularies() {
  return array(
    'dkan_sci_fundref' => array(
      'name' => 'Funding Source',
      'machine_name' => 'dkan_sci_fundref',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
