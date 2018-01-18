<?php
/**
 * @file
 * dkan_sci_fundref.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dkan_sci_fundref_ctools_plugin_api($module = NULL, $api = NULL) {
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
function dkan_sci_fundref_paragraphs_info() {
  $items = array(
    'sci_funding_source' => array(
      'name' => 'Funding Source',
      'bundle' => 'sci_funding_source',
      'locked' => '1',
    ),
  );
  return $items;
}
