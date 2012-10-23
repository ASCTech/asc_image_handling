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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'asc_taxonomy_filter-image_terms_1' => array(
      'delta' => 'image_terms_1',
      'module' => 'asc_taxonomy_filter',
    ),
    'asc_taxonomy_filter-image_terms_2' => array(
      'delta' => 'image_terms_2',
      'module' => 'asc_taxonomy_filter',
    ),
    'asc_taxonomy_filter-image_terms_3' => array(
      'delta' => 'image_terms_3',
      'module' => 'asc_taxonomy_filter',
    ),
    'block-blank' => array(
      'machine_name' => 'blank',
      'module' => 'block',
    ),
  );

  // q7
  $theme = array();

  $theme['asc_taxonomy_filter-image_terms_1'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'image_terms_1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-18',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-image_terms_2'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'image_terms_2',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-17',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-image_terms_3'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'image_terms_3',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-19',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['block-blank'] = array(
    'module' => 'block',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-16',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '<front>
directory
people*',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'blank',
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
