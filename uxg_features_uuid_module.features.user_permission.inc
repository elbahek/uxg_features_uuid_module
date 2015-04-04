<?php
/**
 * @file
 * uxg_features_uuid_module.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uxg_features_uuid_module_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  return $permissions;
}
