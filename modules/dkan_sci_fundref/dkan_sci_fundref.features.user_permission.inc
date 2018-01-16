<?php
/**
 * @file
 * dkan_sci_fundref.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dkan_sci_fundref_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in dkan_sci_fundref'.
  $permissions['add terms in dkan_sci_fundref'] = array(
    'name' => 'add terms in dkan_sci_fundref',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  return $permissions;
}
