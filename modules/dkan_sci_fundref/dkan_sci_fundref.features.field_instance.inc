<?php
/**
 * @file
 * dkan_sci_fundref.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dkan_sci_fundref_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-sci_funding_source-field_sci_fundref'.
  $field_instances['paragraphs_item-sci_funding_source-field_sci_fundref'] = array(
    'bundle' => 'sci_funding_source',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_fundref',
    'label' => 'FundRef',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_funding_source-field_sci_project_grant_number'.
  $field_instances['paragraphs_item-sci_funding_source-field_sci_project_grant_number'] = array(
    'bundle' => 'sci_funding_source',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_project_grant_number',
    'label' => 'Project / Grant Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-dkan_sci_fundref-field_dkan_sci_fundref_doi'.
  $field_instances['taxonomy_term-dkan_sci_fundref-field_dkan_sci_fundref_doi'] = array(
    'bundle' => 'dkan_sci_fundref',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Digital Object Identifier for Fundref. If no DOI is provided then the field is populated using the Founder name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dkan_sci_fundref_doi',
    'label' => 'DOI',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('DOI');
  t('Digital Object Identifier for Fundref. If no DOI is provided then the field is populated using the Founder name.');
  t('FundRef');
  t('Project / Grant Number');

  return $field_instances;
}
