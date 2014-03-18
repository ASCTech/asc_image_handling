<?php
/**
 * @file
 * asc_image_handling.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function asc_image_handling_field_default_fields() {
  $fields = array();

  // Exported field: 'node-page-body'.
  $fields['node-page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'front' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'front_quick_text' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '300',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
        'front_rotor' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'front_rotor_short' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'front_rotor_tall' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'front_text' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-page-field_displaythumbs'.
  $fields['node-page-field_displaythumbs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_displaythumbs',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '0',
          1 => '1',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Check this box to enable the thumbnail pager under your slideshow.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '2',
        ),
        'front' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'front_quick_text' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'front_rotor' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'front_rotor_short' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'front_rotor_tall' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'front_text' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_displaythumbs',
      'label' => 'Display Thumbnails',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-page-field_slideshow'.
  $fields['node-page-field_slideshow'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '8',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slideshow',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'deleted' => '0',
      'description' => 'Image(s) to display in a slideshow at the top of the page.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => 'full_width',
            'linking_method' => 'onclick_full',
            'modal' => 'lightbox2',
            'slide_style' => 'slider',
            'style' => 'Greenarrows',
            'thumb_style' => 'sliderthumb',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '0',
        ),
        'front' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => 'full_width',
            'linking_method' => 'onclick_full',
            'modal' => 'lightbox2',
            'slide_style' => 'slider',
            'style' => 'Greenarrows',
            'thumb_style' => '0',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '0',
        ),
        'front_quick_text' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'front_rotor' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => 'full_width',
            'linking_method' => 'onclick_full',
            'modal' => 'lightbox2',
            'slide_style' => 'slider',
            'style' => 'Greenarrows',
            'thumb_style' => '0',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '0',
        ),
        'front_rotor_short' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => 'full_width',
            'linking_method' => 'onclick_full',
            'modal' => 'lightbox2',
            'slide_style' => 'front_short',
            'style' => 'Greenarrows',
            'thumb_style' => 'thumbnail',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '0',
        ),
        'front_rotor_tall' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => 'full_width',
            'linking_method' => 'onclick_full',
            'modal' => 'lightbox2',
            'slide_style' => 'front_tall',
            'style' => 'Greenarrows',
            'thumb_style' => 'thumbnail',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '0',
        ),
        'front_text' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_slideshow',
      'label' => 'Slideshow Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'media_internet' => 0,
            'upload' => 'upload',
            'youtube' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Check this box to enable the thumbnail pager under your slideshow.');
  t('Display Thumbnails');
  t('Image(s) to display in a slideshow at the top of the page.');
  t('Slideshow Images');

  return $fields;
}
