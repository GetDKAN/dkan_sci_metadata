<?php
/**
 * @file
 * dkan_sci_metadata.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dkan_sci_metadata_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-sci_author-field_sci_auth_is_organization'.
  $field_instances['paragraphs_item-sci_author-field_sci_auth_is_organization'] = array(
    'bundle' => 'sci_author',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check if this is an organization',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_sci_auth_is_organization',
    'label' => 'Is Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-sci_author-field_sci_author_id'.
  $field_instances['paragraphs_item-sci_author-field_sci_author_id'] = array(
    'bundle' => 'sci_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter an identifier for the author if one is available.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_author_id',
    'label' => 'Author ID',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_author-field_sci_author_id_type'.
  $field_instances['paragraphs_item-sci_author-field_sci_author_id_type'] = array(
    'bundle' => 'sci_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the type of Author ID entered.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_author_id_type',
    'label' => 'Author ID Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_author-field_sci_author_name'.
  $field_instances['paragraphs_item-sci_author-field_sci_author_name'] = array(
    'bundle' => 'sci_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Last, First e.g. Doe, John',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_author_name',
    'label' => 'Author Name',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_purpose_methods-field_sci_equip_software_used'.
  $field_instances['paragraphs_item-sci_purpose_methods-field_sci_equip_software_used'] = array(
    'bundle' => 'sci_purpose_methods',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name the equipment and software used to collect and process the data. Provide make and models, name and version number, and a stable URL for each tool used to collect and process the data. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_sci_equip_software_used',
    'label' => 'Equipment or Software Used',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
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

  // Exported field_instance:
  // 'paragraphs_item-sci_purpose_methods-field_sci_intended_use'.
  $field_instances['paragraphs_item-sci_purpose_methods-field_sci_intended_use'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'sci_purpose_methods',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explain the intended use and benefits of the dataset. What purpose do you expect the data to serve? For example, precipitation data may be collected to study patterns of groundwater recharge, to validate watershed models, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_intended_use',
    'label' => 'Intended Use',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_purpose_methods-field_sci_use_limitations'.
  $field_instances['paragraphs_item-sci_purpose_methods-field_sci_use_limitations'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'sci_purpose_methods',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explain the limitations regarding the dataset\'s usability. For example, estimates may be biased over water, equipment may have malfunctioned during a specified time, data are not appropriate for certain scales, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_use_limitations',
    'label' => 'Use Limitations',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author ID');
  t('Author ID Type');
  t('Author Name');
  t('Check if this is an organization');
  t('Enter an identifier for the author if one is available.');
  t('Equipment or Software Used');
  t('Explain the intended use and benefits of the dataset. What purpose do you expect the data to serve? For example, precipitation data may be collected to study patterns of groundwater recharge, to validate watershed models, etc.');
  t('Explain the limitations regarding the dataset\'s usability. For example, estimates may be biased over water, equipment may have malfunctioned during a specified time, data are not appropriate for certain scales, etc.');
  t('Intended Use');
  t('Is Organization');
  t('Last, First e.g. Doe, John');
  t('Name the equipment and software used to collect and process the data. Provide make and models, name and version number, and a stable URL for each tool used to collect and process the data. ');
  t('Select the type of Author ID entered.');
  t('Use Limitations');

  return $field_instances;
}
