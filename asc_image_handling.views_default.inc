<?php
/**
 * @file
 * asc_image_handling.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asc_image_handling_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery-image';
  $handler->display->display_options['row_plugin'] = 'file';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = TRUE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
  /* Contextual filter: File: Image Terms 1 (field_image_terms_1) */
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['id'] = 'field_image_terms_1_tid';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['table'] = 'field_data_field_image_terms_1';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['field'] = 'field_image_terms_1_tid';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_terms_1_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: File: Image Terms 2 (field_image_terms_2) */
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['id'] = 'field_image_terms_2_tid';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['table'] = 'field_data_field_image_terms_2';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['field'] = 'field_image_terms_2_tid';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_terms_2_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: File: Image Terms 3 (field_image_terms_3) */
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['id'] = 'field_image_terms_3_tid';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['table'] = 'field_data_field_image_terms_3';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['field'] = 'field_image_terms_3_tid';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['breadcrumb'] = '%1 %2 %3';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_terms_3_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Display in Gallery (field_gallery) */
  $handler->display->display_options['filters']['field_gallery_value']['id'] = 'field_gallery_value';
  $handler->display->display_options['filters']['field_gallery_value']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['filters']['field_gallery_value']['field'] = 'field_gallery_value';
  $handler->display->display_options['filters']['field_gallery_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: File: Image Terms 1 (field_image_terms_1) */
  $handler->display->display_options['filters']['field_image_terms_1_tid']['id'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['table'] = 'field_data_field_image_terms_1';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['field'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['operator_id'] = 'field_image_terms_1_tid_op';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['label'] = 'Filter By:';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['operator'] = 'field_image_terms_1_tid_op';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['identifier'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_image_terms_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['vocabulary'] = 'image_terms_1';
  /* Filter criterion: File: Image Terms 2 (field_image_terms_2) */
  $handler->display->display_options['filters']['field_image_terms_2_tid']['id'] = 'field_image_terms_2_tid';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['table'] = 'field_data_field_image_terms_2';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['field'] = 'field_image_terms_2_tid';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_2_tid']['expose']['operator_id'] = 'field_image_terms_2_tid_op';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['expose']['label'] = 'Filter By:';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['expose']['operator'] = 'field_image_terms_2_tid_op';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['expose']['identifier'] = 'field_image_terms_2_tid';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_image_terms_2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_image_terms_2_tid']['vocabulary'] = 'image_terms_2';
  /* Filter criterion: File: Image Terms 3 (field_image_terms_3) */
  $handler->display->display_options['filters']['field_image_terms_3_tid']['id'] = 'field_image_terms_3_tid';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['table'] = 'field_data_field_image_terms_3';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['field'] = 'field_image_terms_3_tid';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_3_tid']['expose']['operator_id'] = 'field_image_terms_3_tid_op';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['expose']['label'] = 'Filter By:';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['expose']['operator'] = 'field_image_terms_3_tid_op';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['expose']['identifier'] = 'field_image_terms_3_tid';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_image_terms_3_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_image_terms_3_tid']['vocabulary'] = 'image_terms_3';

  /* Display: Gallery */
  $handler = $view->new_display('page', 'Gallery', 'page');
  $handler->display->display_options['display_description'] = 'Gallery page for filterable display of dynamic image collections.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'gallery';
  $export['image_gallery'] = $view;

  return $export;
}
