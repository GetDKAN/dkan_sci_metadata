<?php
/**
 * @file
 * dkan_sci_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dkan_sci_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dkan_sci_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_dkan_sci_search';
  $view->human_name = 'DKAN Sci Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DKAN Sci Search';
  $handler->display->display_options['css_class'] = 'view-dkan-datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total datasets';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found. Please try another keyword.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Highlight Image */
  $handler->display->display_options['fields']['field_highlight_image']['id'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['fields']['field_highlight_image']['field'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Dataset */
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['id'] = 'field_dataset_metadata_ref';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['field'] = 'field_dataset_metadata_ref';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_dataset_metadata_ref']['bypass_access'] = 0;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_dkan_sci_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    200153887 => 0,
    3 => 0,
    48325815 => 0,
    110661005 => 0,
    210770034 => 0,
    190180509 => 0,
    169051924 => 0,
    57821158 => 0,
    190826733 => 0,
    5747148 => 0,
    228587613 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'attachments_field_link_remote_file' => 'attachments_field_link_remote_file',
    'attachments_field_metadata_file' => 'attachments_field_metadata_file',
    'field_author' => 'field_author',
    'field_file_content' => 'field_file_content',
    'field_license' => 'field_license',
    'search_api_viewed' => 'search_api_viewed',
    'title' => 'title',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['dkan_sci_search'] = $view;

  return $export;
}
