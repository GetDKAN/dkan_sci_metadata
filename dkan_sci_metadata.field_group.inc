<?php
/**
 * @file
 * dkan_sci_metadata.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_sci_metadata_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_reviewer|paragraphs_item|science_metadata|form';
  $field_group->group_name = 'group_author_reviewer';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'science_metadata';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authors and Reviewers',
    'weight' => '0',
    'children' => array(
      0 => 'field_sci_author',
      1 => 'field_sci_peer_reviewed',
      2 => 'field_sci_peer_reviewer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Authors and Reviewers',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-author-reviewer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_author_reviewer|paragraphs_item|science_metadata|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citations|paragraphs_item|science_metadata|form';
  $field_group->group_name = 'group_citations';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'science_metadata';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Citations',
    'weight' => '2',
    'children' => array(
      0 => 'field_citation_methods',
      1 => 'field_citation_primary',
      2 => 'field_citation_related',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-citations field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_citations|paragraphs_item|science_metadata|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_purpose_methods|paragraphs_item|science_metadata|form';
  $field_group->group_name = 'group_purpose_methods';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'science_metadata';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Purpose and Methods',
    'weight' => '1',
    'children' => array(
      0 => 'field_sci_equip_software_used',
      1 => 'field_sci_intended_use',
      2 => 'field_use_limitations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Purpose and Methods',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-purpose-methods field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_purpose_methods|paragraphs_item|science_metadata|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Authors and Reviewers');
  t('Citations');
  t('Purpose and Methods');

  return $field_groups;
}
