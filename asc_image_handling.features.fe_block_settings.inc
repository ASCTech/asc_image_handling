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

  $export['version'] = '2.0';

  $export['asc_taxonomy_filter-image_terms_1'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_terms_1',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => 'gallery*',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['asc_taxonomy_filter-image_terms_2'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_terms_2',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['asc_taxonomy_filter-image_terms_3'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_terms_3',
    'module' => 'asc_taxonomy_filter',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'q7',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-blank'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'blank',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'q7' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'q7',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
