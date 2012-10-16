<?php
/**
 * @file
 * asc_image_handling.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function asc_image_handling_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: html
  $profiles['html'] = array(
    'format' => 'html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Source' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'SelectAll' => 1,
          'Replace' => 1,
          'Maximize' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,pre,h2,h3',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
      'buttonorder' => 'Bold,Italic,JustifyLeft,JustifyCenter,JustifyRight,BulletedList,NumberedList,Outdent,Indent,Undo,Link,Unlink,Anchor,media,Source,Cut,Copy,PasteText,PasteFromWord,RemoveFormat,SpecialChar,Format,SelectAll,Replace,Maximize,break',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
