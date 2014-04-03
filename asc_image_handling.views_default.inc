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
  $handler->display->display_options['row_options']['view_mode'] = 'square';
  $handler->display->display_options['row_options']['links'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Please check back for more gallery images!';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'filename' => 0,
  );
  $handler->display->display_options['fields']['contextual_links']['destination'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Taxonomy Entity Index: Has taxonomy term ID on File (indexed in taxonomy_entity_index) */
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['id'] = 'taxonomy_entity_index_tid';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['table'] = 'file_managed';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['field'] = 'taxonomy_entity_index_tid';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_entity_index_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Display in Gallery (field_gallery) */
  $handler->display->display_options['filters']['field_gallery_value']['id'] = 'field_gallery_value';
  $handler->display->display_options['filters']['field_gallery_value']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['filters']['field_gallery_value']['field'] = 'field_gallery_value';
  $handler->display->display_options['filters']['field_gallery_value']['value'] = array(
    1 => '1',
  );

  /* Display: Gallery */
  $handler = $view->new_display('page', 'Gallery', 'gallery_page');
  $handler->display->display_options['display_description'] = 'Gallery page for filterable display of dynamic image collections.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'gallery';
  $translatables['image_gallery'] = array(
    t('Master'),
    t('Image Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results'),
    t('Please check back for more gallery images!'),
    t('Upload date'),
    t('All'),
    t('Gallery'),
    t('Gallery page for filterable display of dynamic image collections.'),
  );
  $export['image_gallery'] = $view;

  return $export;
}
