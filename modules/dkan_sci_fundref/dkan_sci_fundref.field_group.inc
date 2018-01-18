<?php
/**
 * @file
 * dkan_sci_fundref.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_sci_fundref_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dkan_sci_funder_doi|taxonomy_term|dkan_sci_fundref|form';
  $field_group->group_name = 'group_dkan_sci_funder_doi';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'dkan_sci_fundref';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dkan_sci_funder';
  $field_group->data = array(
    'label' => 'Search By Funder DOI',
    'weight' => '8',
    'children' => array(
      0 => 'field_dkan_sci_fundref_doi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Search By Funder DOI',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-dkan-sci-funder-doi field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_dkan_sci_funder_doi|taxonomy_term|dkan_sci_fundref|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dkan_sci_funder_name|taxonomy_term|dkan_sci_fundref|form';
  $field_group->group_name = 'group_dkan_sci_funder_name';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'dkan_sci_fundref';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dkan_sci_funder';
  $field_group->data = array(
    'label' => 'Search By Funder Name',
    'weight' => '7',
    'children' => array(
      0 => 'name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Search By Funder Name',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-dkan-sci-funder-name field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_dkan_sci_funder_name|taxonomy_term|dkan_sci_fundref|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dkan_sci_funder|taxonomy_term|dkan_sci_fundref|form';
  $field_group->group_name = 'group_dkan_sci_funder';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'dkan_sci_fundref';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funder',
    'weight' => '0',
    'children' => array(
      0 => 'group_dkan_sci_funder_name',
      1 => 'group_dkan_sci_funder_doi',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Funder',
      'instance_settings' => array(
        'id' => 'dkan-sci-funder',
        'classes' => 'group-dkan-sci-funder field-group-htabs',
      ),
    ),
  );
  $field_groups['group_dkan_sci_funder|taxonomy_term|dkan_sci_fundref|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Funder');
  t('Search By Funder DOI');
  t('Search By Funder Name');

  return $field_groups;
}
