<?php
/**
 * @file
 * dkan_sci_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dkan_sci_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@dkan_sci_search';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@dkan_sci_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extracting_servlet_path';
  $strongarm->value = 'extract/tika';
  $export['search_api_attachments_extracting_servlet_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extract_using';
  $strongarm->value = 'solr';
  $export['search_api_attachments_extract_using'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_jar';
  $strongarm->value = 'tika-app-1.4.jar';
  $export['search_api_attachments_tika_jar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_path';
  $strongarm->value = '';
  $export['search_api_attachments_tika_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'datasets' => array(
      'search_api_views:dkan_datasets:block_1' => 'search_api_views:dkan_datasets:block_1',
      'search_api_views:dkan_datasets:panel_pane_1' => 'search_api_views:dkan_datasets:panel_pane_1',
      'search_api_views:dkan_datasets:panel_pane_2' => 'search_api_views:dkan_datasets:panel_pane_2',
      'search_api_views:dkan_datasets:panel_pane_3' => 'search_api_views:dkan_datasets:panel_pane_3',
      'search_api_views:dkan_datasets:search_api_views_facets_block_1' => 'search_api_views:dkan_datasets:search_api_views_facets_block_1',
      'search_api_views:dkan_datasets:search_api_views_facets_block_2' => 'search_api_views:dkan_datasets:search_api_views_facets_block_2',
      'search_api_views:dkan_datasets_farm_2_fly:block_1' => 'search_api_views:dkan_datasets_farm_2_fly:block_1',
      'search_api_views:dkan_datasets_farm_2_fly:panel_pane_1' => 'search_api_views:dkan_datasets_farm_2_fly:panel_pane_1',
      'search_api_views:dkan_datasets_farm_2_fly:panel_pane_2' => 'search_api_views:dkan_datasets_farm_2_fly:panel_pane_2',
      'search_api_views:dkan_datasets_i5k:block_1' => 'search_api_views:dkan_datasets_i5k:block_1',
      'search_api_views:dkan_datasets_i5k:panel_pane_1' => 'search_api_views:dkan_datasets_i5k:panel_pane_1',
      'search_api_views:dkan_datasets_i5k:panel_pane_2' => 'search_api_views:dkan_datasets_i5k:panel_pane_2',
      'search_api_views:dkan_datasets_lca:block_1' => 'search_api_views:dkan_datasets_lca:block_1',
      'search_api_views:dkan_datasets_lca:panel_pane_1' => 'search_api_views:dkan_datasets_lca:panel_pane_1',
      'search_api_views:dkan_datasets_lca:panel_pane_2' => 'search_api_views:dkan_datasets_lca:panel_pane_2',
      'search_api_views:dkan_datasets_lca:panel_pane_3' => 'search_api_views:dkan_datasets_lca:panel_pane_3',
      'search_api_views:dkan_datasets_lca:panel_pane_4' => 'search_api_views:dkan_datasets_lca:panel_pane_4',
      'search_api_views:dkan_datasets_lca:panel_pane_5' => 'search_api_views:dkan_datasets_lca:panel_pane_5',
      'search_api_views:dkan_datasets_lca_datasets_:block_1' => 'search_api_views:dkan_datasets_lca_datasets_:block_1',
      'search_api_views:dkan_datasets_lca_datasets_:panel_pane_1' => 'search_api_views:dkan_datasets_lca_datasets_:panel_pane_1',
      'search_api_views:dkan_datasets_lca_datasets_:panel_pane_2' => 'search_api_views:dkan_datasets_lca_datasets_:panel_pane_2',
      'search_api_views:dkan_datasets_ltar:block_1' => 'search_api_views:dkan_datasets_ltar:block_1',
      'search_api_views:dkan_datasets_ltar:panel_pane_1' => 'search_api_views:dkan_datasets_ltar:panel_pane_1',
      'search_api_views:dkan_datasets_ltar:panel_pane_2' => 'search_api_views:dkan_datasets_ltar:panel_pane_2',
      'search_api_views:dkan_datasets_vpgc:block_1' => 'search_api_views:dkan_datasets_vpgc:block_1',
      'search_api_views:dkan_datasets_vpgc:panel_pane_1' => 'search_api_views:dkan_datasets_vpgc:panel_pane_1',
      'search_api_views:dkan_datasets_vpgc:panel_pane_2' => 'search_api_views:dkan_datasets_vpgc:panel_pane_2',
      'search_api_views:dkan_harvest_source_search:dkan_harvest_source_search_pane' => 'search_api_views:dkan_harvest_source_search:dkan_harvest_source_search_pane',
      'search_api_views:facets_block_for_lca:search_api_views_facets_block_1' => 'search_api_views:facets_block_for_lca:search_api_views_facets_block_1',
      'search_api_views:facets_block_for_lca:search_api_views_facets_block_2' => 'search_api_views:facets_block_for_lca:search_api_views_facets_block_2',
      'search_api_views:facets_block_for_lca:search_api_views_facets_block_3' => 'search_api_views:facets_block_for_lca:search_api_views_facets_block_3',
      'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_1' => 'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_1',
      'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_2' => 'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_2',
      'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_3' => 'search_api_views:facets_block_for_lca_vpgc:search_api_views_facets_block_3',
      'search_api_views:facets_block_for_ltar:search_api_views_facets_block_1' => 'search_api_views:facets_block_for_ltar:search_api_views_facets_block_1',
      'search_api_views:facets_block_for_ltar:search_api_views_facets_block_2' => 'search_api_views:facets_block_for_ltar:search_api_views_facets_block_2',
      'search_api_views:facets_block_for_ltar:search_api_views_facets_block_3' => 'search_api_views:facets_block_for_ltar:search_api_views_facets_block_3',
      'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_1' => 'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_1',
      'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_2' => 'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_2',
      'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_3' => 'search_api_views:facets_block_for_vpgc:search_api_views_facets_block_3',
      'search_api_views:facets_block_for_vpgc_adc_keywords:search_api_views_facets_block_1' => 'search_api_views:facets_block_for_vpgc_adc_keywords:search_api_views_facets_block_1',
      'search_api_views:user_profile_search:entity_view_1' => 'search_api_views:user_profile_search:entity_view_1',
      'search_api_views:vijaya_search1:block' => 'search_api_views:vijaya_search1:block',
      'search_api_views:vijaya_search1:search_api_views_facets_block_1' => 'search_api_views:vijaya_search1:search_api_views_facets_block_1',
      'search_api_views:vijaya_search:block' => 'search_api_views:vijaya_search:block',
      'search_api_views:vijaya_search:panel_pane_1' => 'search_api_views:vijaya_search:panel_pane_1',
      'search_api_views:vijaya_search:search_api_views_facets_block_1' => 'search_api_views:vijaya_search:search_api_views_facets_block_1',
      'search_api_views:vijaya_search:search_api_views_facets_block_2' => 'search_api_views:vijaya_search:search_api_views_facets_block_2',
      'search_api_views:vijaya_search:search_api_views_facets_block_3' => 'search_api_views:vijaya_search:search_api_views_facets_block_3',
    ),
    'groups_di' => array(
      'search_api_views:dkan_group_search:dkan_group_search' => 'search_api_views:dkan_group_search:dkan_group_search',
      'search_api_views:groups_search:entity_view_1' => 'search_api_views:groups_search:entity_view_1',
    ),
    'dkan_sci_search' => array(
      'search_api_views:dkan_sci_search:panel_pane_1' => 'search_api_views:dkan_sci_search:panel_pane_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
