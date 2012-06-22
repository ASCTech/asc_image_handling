<?php
/**
 * @file
 * asc_image_handling.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function asc_image_handling_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_image';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'square_thumbnail',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:name]',
  );
  $export['image__default__file_image'] = $file_display;

  return $export;
}
