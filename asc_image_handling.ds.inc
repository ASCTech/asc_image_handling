<?php
/**
 * @file
 * asc_image_handling.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function asc_image_handling_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_quick_text';
  $ds_view_mode->label = 'Front Quick Text';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_quick_text'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_rotor_short';
  $ds_view_mode->label = 'Front Rotor Short';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_rotor_short'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_rotor_tall';
  $ds_view_mode->label = 'Front Rotor Tall';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_rotor_tall'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_text';
  $ds_view_mode->label = 'Front Text';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_text'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_page_width';
  $ds_view_mode->label = 'Full Page Width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['full_page_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'half_page_width';
  $ds_view_mode->label = 'Half Page Width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['half_page_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'quarter_page_width';
  $ds_view_mode->label = 'Quarter Page Width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['quarter_page_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'square';
  $ds_view_mode->label = 'Square';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['square'] = $ds_view_mode;

  return $export;
}
