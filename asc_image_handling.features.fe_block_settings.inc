<?php
/**
 * @file
 * asc_image_handling.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_image_handling_default_fe_block_settings() {
  $export = array();

  // q7
  $theme = array();

  $theme['block-blank'] = array(
    'module' => 'block',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>
blog*
directory*
events*
news*
people*',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'blank',
  );

  $theme['menu_block-ASC Main Block-1'] = array(
    'module' => 'menu_block',
    'delta' => 'ASC Main Block-1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>
blog*
directory*
events*
news*
people*',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
