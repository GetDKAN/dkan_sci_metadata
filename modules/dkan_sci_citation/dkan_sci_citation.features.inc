<?php
/**
 * @file
 * dkan_sci_citation.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function dkan_sci_citation_paragraphs_info() {
  $items = array(
    'sci_citation' => array(
      'name' => 'Citation',
      'bundle' => 'sci_citation',
      'locked' => '1',
    ),
  );
  return $items;
}
