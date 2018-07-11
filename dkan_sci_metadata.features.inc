<?php
/**
 * @file
 * dkan_sci_metadata.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dkan_sci_metadata_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function dkan_sci_metadata_paragraphs_info() {
  $items = array(
    'sci_author' => array(
      'name' => 'Science Author',
      'bundle' => 'sci_author',
      'locked' => '1',
    ),
    'science_metadata' => array(
      'name' => 'Science Metadata',
      'bundle' => 'science_metadata',
      'locked' => '1',
    ),
  );
  return $items;
}
