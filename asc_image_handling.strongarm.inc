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
  $strongarm->name = 'exclude_node_title_content_type_modes_page';
  $strongarm->value = array(
    'full' => 'full',
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'token' => 0,
    'front_rotor_short' => 0,
    'front_rotor_tall' => 0,
    'front_text' => 0,
    'front_quick_text' => 0,
    'revision' => 0,
    'nodeform' => 0,
  );
  $export['exclude_node_title_content_type_modes_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exclude_node_title_content_type_value_page';
  $strongarm->value = 'user';
  $export['exclude_node_title_content_type_value_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(
      'media_link' => array(
        'custom_settings' => FALSE,
      ),
      'media_original' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'half_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'quarter_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'square' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'full_page_width' => array(
        'custom_settings' => TRUE,
      ),
      'half_page_width' => array(
        'custom_settings' => TRUE,
      ),
      'quarter_page_width' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'media_link' => array(
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
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'square' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
      ),
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
          'half_page_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'quarter_page_width' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'square' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_link' => array(
        'custom_settings' => FALSE,
      ),
      'media_original' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'half_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'quarter_page_width' => array(
        'custom_settings' => FALSE,
      ),
      'square' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'front' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor' => array(
        'custom_settings' => TRUE,
      ),
      'front_text' => array(
        'custom_settings' => TRUE,
      ),
      'front_rotor_short' => array(
        'custom_settings' => TRUE,
      ),
      'front_rotor_tall' => array(
        'custom_settings' => TRUE,
      ),
      'front_quick_text' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    5 => array(
      'weight' => '0',
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    6 => array(
      'weight' => '0',
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    4 => array(
      'weight' => '0',
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    3 => array(
      'weight' => '0',
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    7 => array(
      'weight' => '0',
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    2 => array(
      'weight' => 11,
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => '1',
    ),
    1 => array(
      'weight' => 12,
      'vimeo_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => 0,
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_border_size';
  $strongarm->value = '10';
  $export['lightbox2_border_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_box_color';
  $strongarm->value = '000';
  $export['lightbox2_box_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_font_color';
  $strongarm->value = 'fff';
  $export['lightbox2_font_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_color';
  $strongarm->value = '000';
  $export['lightbox2_overlay_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_opacity';
  $strongarm->value = '0.8';
  $export['lightbox2_overlay_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__show_deprecated_view_modes';
  $strongarm->value = TRUE;
  $export['media__show_deprecated_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  );
  $export['media__wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-quick-links',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  return $export;
}
