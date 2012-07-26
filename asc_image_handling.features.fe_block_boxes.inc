<?php
/**
 * @file
 * asc_image_handling.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function asc_image_handling_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blank Block';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'blank';
  $fe_block_boxes->body = '&nbsp;';

  $export['blank'] = $fe_block_boxes;

  return $export;
}
