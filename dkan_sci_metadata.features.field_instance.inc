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
  // 'paragraphs_item-citation_fields-field_citation_methods'.
  $field_instances['paragraphs_item-citation_fields-field_citation_methods'] = array(
    'bundle' => 'citation_fields',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_citation_methods',
    'label' => 'Citation Methods',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 3,
        'sci_citation' => 4,
        'sci_funding_source' => 5,
        'sci_purpose_methods' => 6,
        'sci_review' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-citation_fields-field_citation_primary'.
  $field_instances['paragraphs_item-citation_fields-field_citation_primary'] = array(
    'bundle' => 'citation_fields',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_citation_primary',
    'label' => 'Citation Primary',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 3,
        'sci_citation' => 4,
        'sci_funding_source' => 5,
        'sci_purpose_methods' => 6,
        'sci_review' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-citation_fields-field_citation_related'.
  $field_instances['paragraphs_item-citation_fields-field_citation_related'] = array(
    'bundle' => 'citation_fields',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_citation_related',
    'label' => 'Citation Related',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 3,
        'sci_citation' => 4,
        'sci_funding_source' => 5,
        'sci_purpose_methods' => 6,
        'sci_review' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

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
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'description' => 'Enter the unique identifier for the individual if one is available',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sci_author_id',
    'label' => 'Identifier',
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
    'description' => 'Choose if the individual has a globally unique identifier. ORCID preferred.',
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
    'label' => 'ID Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
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
    'description' => 'Last Name, First Name, Middle Initial.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
    'label' => 'Name',
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
        'label' => 'inline',
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

  // Exported field_instance:
  // 'paragraphs_item-sci_review-field_sci_peer_reviewed'.
  $field_instances['paragraphs_item-sci_review-field_sci_peer_reviewed'] = array(
    'bundle' => 'sci_review',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_sci_peer_reviewed',
    'label' => 'Peer Reviewed',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-sci_review-field_sci_peer_reviewer'.
  $field_instances['paragraphs_item-sci_review-field_sci_peer_reviewer'] = array(
    'bundle' => 'sci_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_sci_peer_reviewer',
    'label' => 'Reviewer',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'sci_author' => 'sci_author',
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
      ),
      'bundle_weights' => array(
        'sci_author' => 2,
        'sci_purpose_methods' => 3,
        'sci_review' => 4,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Reviewer',
      'title_multiple' => 'Reviewers',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_citation_methods'.
  $field_instances['paragraphs_item-science_metadata-field_citation_methods'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the citation for a paper that describes methods used to collect or process your data.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_citation_methods',
    'label' => 'Method Citation',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'sci_purpose_methods' => 7,
        'sci_review' => 8,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Citation',
      'title_multiple' => 'Citations',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_citation_primary'.
  $field_instances['paragraphs_item-science_metadata-field_citation_primary'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the citation for the article that directly describes this dataset (i.e. a data paper). Leave blank if there is no primary article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_citation_primary',
    'label' => 'Primary Article',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'sci_purpose_methods' => 7,
        'sci_review' => 8,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Citation',
      'title_multiple' => 'Citations',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_citation_related'.
  $field_instances['paragraphs_item-science_metadata-field_citation_related'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the citation for articles related to this dataset. List only the most relevant one(s).
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_citation_related',
    'label' => 'Related Articles',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => -1,
        'sci_citation' => 'sci_citation',
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'sci_purpose_methods' => 7,
        'sci_review' => 8,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Citation',
      'title_multiple' => 'Citations',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_funding_sources'.
  $field_instances['paragraphs_item-science_metadata-field_funding_sources'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_funding_sources',
    'label' => 'Funding Sources',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'adc_metadata' => -1,
        'sci_author' => -1,
        'sci_citation' => -1,
        'sci_funding_source' => 'sci_funding_source',
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'adc_metadata' => 8,
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'title' => 'Funding Source',
      'title_multiple' => 'Funding Sources',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_author'.
  $field_instances['paragraphs_item-science_metadata-field_sci_author'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_sci_author',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'sci_author' => 'sci_author',
        'sci_citation' => -1,
        'sci_funding_source' => -1,
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Author',
      'title_multiple' => 'Authors',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_dataset_citation'.
  $field_instances['paragraphs_item-science_metadata-field_sci_dataset_citation'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this dataset is an aggregation or adaptation of other data (e.g. raw data linked to derived data), list full citations for those datasets that were used to construct this one. If this is a newer version of a previous dataset, use the "Related to" field below.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_dataset_citation',
    'label' => 'Cites Other Datasets',
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
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'paragraphs_item-science_metadata-field_sci_doi'.
  $field_instances['paragraphs_item-science_metadata-field_sci_doi'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter DOI assigned to this dataset upon publication. Usually this is done by NAL curators unless the dataset has previously been published.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'dkan_sci_metadata',
        'settings' => array(),
        'type' => 'render_as_link',
        'weight' => 10,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_doi',
    'label' => 'Dataset DOI (digital object identifier)',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_equip_software_used'.
  $field_instances['paragraphs_item-science_metadata-field_sci_equip_software_used'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name the equipment and software used to collect and process the data. Provide make and models, name and version number, and a stable URL for each tool used to collect and process the data. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_intended_use'.
  $field_instances['paragraphs_item-science_metadata-field_sci_intended_use'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explain the intended use and benefits of the dataset. What purpose do you expect the data to serve? For example, precipitation data may be collected to study patterns of groundwater recharge, to validate watershed models, etc.',
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
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_peer_reviewed'.
  $field_instances['paragraphs_item-science_metadata-field_sci_peer_reviewed'] = array(
    'bundle' => 'science_metadata',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box if your dataset was peer-reviewed.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_sci_peer_reviewed',
    'label' => 'Peer Reviewed',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_peer_reviewer'.
  $field_instances['paragraphs_item-science_metadata-field_sci_peer_reviewer'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_sci_peer_reviewer',
    'label' => 'Reviewer',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'citation_fields' => -1,
        'sci_author' => 'sci_author',
        'sci_citation' => -1,
        'sci_funding_source' => -1,
        'sci_purpose_methods' => -1,
        'sci_review' => -1,
        'science_metadata' => -1,
      ),
      'bundle_weights' => array(
        'citation_fields' => 2,
        'sci_author' => 4,
        'sci_citation' => 5,
        'sci_funding_source' => 6,
        'sci_purpose_methods' => 7,
        'sci_review' => 8,
        'science_metadata' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Reviewer',
      'title_multiple' => 'Reviewers',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_preferred_dataset_cite'.
  $field_instances['paragraphs_item-science_metadata-field_sci_preferred_dataset_cite'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter how you want this dataset to be cited when re-used. Leave blank if you want a dataset citation to be automatically generated for you.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_preferred_dataset_cite',
    'label' => 'Preferred Dataset Citation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_product_type'.
  $field_instances['paragraphs_item-science_metadata-field_sci_product_type'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indicate the most important part of the dataset\'s actual content - choose one of the following: Audiovisual; Collection; Dataset; Event; Image; InteractiveResource; Model; PhysicalObject; Service; Software; Sound; Text; Workflow; Other This field is only used for DOI submission, and defaults to Dataset if left blank.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_product_type',
    'label' => 'Product Type',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_sci_related_content'.
  $field_instances['paragraphs_item-science_metadata-field_sci_related_content'] = array(
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'An internal link or link to an outside resource that provides additional context to the dataset.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sci_related_content',
    'label' => 'Related Content',
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
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
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
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-science_metadata-field_use_limitations'.
  $field_instances['paragraphs_item-science_metadata-field_use_limitations'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'science_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explain the limitations regarding the dataset\'s usability. For example, estimates may be biased over water, equipment may have malfunctioned during a specified time, data are not appropriate for certain scales, etc.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_use_limitations',
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('An internal link or link to an outside resource that provides additional context to the dataset.');
  t('Authors');
  t('Check if this is an organization');
  t('Check this box if your dataset was peer-reviewed.');
  t('Choose if the individual has a globally unique identifier. ORCID preferred.');
  t('Citation Methods');
  t('Citation Primary');
  t('Citation Related');
  t('Cites Other Datasets');
  t('Dataset DOI (digital object identifier)');
  t('Enter DOI assigned to this dataset upon publication. Usually this is done by NAL curators unless the dataset has previously been published.');
  t('Enter how you want this dataset to be cited when re-used. Leave blank if you want a dataset citation to be automatically generated for you.');
  t('Enter the citation for a paper that describes methods used to collect or process your data.');
  t('Enter the citation for articles related to this dataset. List only the most relevant one(s).
');
  t('Enter the citation for the article that directly describes this dataset (i.e. a data paper). Leave blank if there is no primary article.');
  t('Enter the unique identifier for the individual if one is available');
  t('Equipment or Software Used');
  t('Explain the intended use and benefits of the dataset. What purpose do you expect the data to serve? For example, precipitation data may be collected to study patterns of groundwater recharge, to validate watershed models, etc.');
  t('Explain the limitations regarding the dataset\'s usability. For example, estimates may be biased over water, equipment may have malfunctioned during a specified time, data are not appropriate for certain scales, etc.');
  t('Funding Sources');
  t('ID Type');
  t('Identifier');
  t('If this dataset is an aggregation or adaptation of other data (e.g. raw data linked to derived data), list full citations for those datasets that were used to construct this one. If this is a newer version of a previous dataset, use the "Related to" field below.');
  t('Indicate the most important part of the dataset\'s actual content - choose one of the following: Audiovisual; Collection; Dataset; Event; Image; InteractiveResource; Model; PhysicalObject; Service; Software; Sound; Text; Workflow; Other This field is only used for DOI submission, and defaults to Dataset if left blank.');
  t('Intended Use');
  t('Is Organization');
  t('Last Name, First Name, Middle Initial.');
  t('Method Citation');
  t('Name');
  t('Name the equipment and software used to collect and process the data. Provide make and models, name and version number, and a stable URL for each tool used to collect and process the data. ');
  t('Peer Reviewed');
  t('Preferred Dataset Citation');
  t('Primary Article');
  t('Product Type');
  t('Related Articles');
  t('Related Content');
  t('Reviewer');
  t('Use Limitations');

  return $field_instances;
}
