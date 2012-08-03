<?php
/**
 * @file
 * asc_image_handling.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_image_handling_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit file.
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
      2 => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view file.
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
