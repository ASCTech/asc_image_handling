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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_image_terms_1_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
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
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: File: Alt Text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['rendered']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['rendered']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['rendered']['alter']['alt'] = '[field_file_image_title_text]';
  $handler->display->display_options['fields']['rendered']['alter']['rel'] = 'lightbox[index]';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'square';
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'square';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
  /* Contextual filter: Broken/missing handler */
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
  /* Filter criterion: File: Image Terms 1 (field_image_terms_1) */
  $handler->display->display_options['filters']['field_image_terms_1_tid']['id'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['table'] = 'field_data_field_image_terms_1';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['field'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['operator_id'] = 'field_image_terms_1_tid_op';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['label'] = 'Events';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['operator'] = 'field_image_terms_1_tid_op';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['identifier'] = 'field_image_terms_1_tid';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_image_terms_1_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_image_terms_1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_image_terms_1_tid']['vocabulary'] = 'image_terms_1';

  /* Display: Gallery */
  $handler = $view->new_display('page', 'Gallery', 'gallery_page');
  $handler->display->display_options['display_description'] = 'Gallery page for filterable display of dynamic image collections.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery-image';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'rendered_entity' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
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
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results'),
    t('Please check back for more gallery images!'),
    t('[field_file_image_title_text]'),
    t('Upload date'),
    t('All'),
    t('Events'),
    t('Gallery'),
    t('Gallery page for filterable display of dynamic image collections.'),
  );
  $export['image_gallery'] = $view;

  return $export;
}
