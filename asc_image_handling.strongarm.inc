<?php
/**
 * @file
 * asc_image_handling.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_image_handling_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_link' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'media_preview' => array(
        'custom_settings' => FALSE,
      ),
      'media_small' => array(
        'custom_settings' => FALSE,
      ),
      'media_large' => array(
        'custom_settings' => FALSE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'full_page_width' => array(
        'custom_settings' => TRUE,
      ),
      'half_page_width_left' => array(
        'custom_settings' => TRUE,
      ),
      'half_page_width_right' => array(
        'custom_settings' => TRUE,
      ),
      'quarter_page_width_left' => array(
        'custom_settings' => TRUE,
      ),
      'quarter_page_width_right' => array(
        'custom_settings' => TRUE,
      ),
      'half_page_width' => array(
        'custom_settings' => TRUE,
      ),
      'quarter_page_width' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full_page_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'half_page_width_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'half_page_width_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter_page_width_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter_page_width_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'half_page_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter_page_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  return $export;
}
