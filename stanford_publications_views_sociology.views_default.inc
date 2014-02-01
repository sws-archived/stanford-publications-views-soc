<?php
/**
 * @file
 * stanford_publications_views_sociology.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_publications_views_sociology_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications_recent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications Recent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'views-grid-five well';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More Publications';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>[field_s_pub_type]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="https://sites.stanford.edu/sociology/publications/search?field_s_pub_author_type_tid=%1&field_s_pub_type_tid=%2">See all</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_sm_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author/editor */
  $handler->display->display_options['fields']['field_s_pub_author_link']['id'] = 'field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['table'] = 'field_data_field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['field'] = 'field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_s_pub_type']['id'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['field'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Author Type */
  $handler->display->display_options['fields']['field_s_pub_author_type']['id'] = 'field_s_pub_author_type';
  $handler->display->display_options['fields']['field_s_pub_author_type']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['fields']['field_s_pub_author_type']['field'] = 'field_s_pub_author_type';
  $handler->display->display_options['fields']['field_s_pub_author_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_pub_author_type']['delta_offset'] = '0';
  /* Sort criterion: Content: Publication Year (field_s_publication_year) */
  $handler->display->display_options['sorts']['field_s_publication_year_value']['id'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['field'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['order'] = 'DESC';
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '85';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '61';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Faculty Book Block */
  $handler = $view->new_display('block', 'Faculty Book Block', 'book_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '85';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '61';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Faculty Journal Block */
  $handler = $view->new_display('block', 'Faculty Journal Block', 'journal_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '85';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '63';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Faculty News Block */
  $handler = $view->new_display('block', 'Faculty News Block', 'news_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '85';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '65';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Student Book Block */
  $handler = $view->new_display('block', 'Student Book Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '87';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '61';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Student Journal Block */
  $handler = $view->new_display('block', 'Student Journal Block', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '87';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '63';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Student News Block */
  $handler = $view->new_display('block', 'Student News Block', 'block_3');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['default_argument_options']['argument'] = '87';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_author_type_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['default_argument_options']['argument'] = '65';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_pub_type_tid']['summary_options']['items_per_page'] = '25';
  $export['publications_recent'] = $view;

  $view = new view();
  $view->name = 'stanford_publications_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Publications';
  $handler->display->display_options['css_class'] = 'views-grid-five well';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More Publications';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_pub_author_link_target_id']['id'] = 'field_s_pub_author_link_target_id';
  $handler->display->display_options['relationships']['field_s_pub_author_link_target_id']['table'] = 'field_data_field_s_pub_author_link';
  $handler->display->display_options['relationships']['field_s_pub_author_link_target_id']['field'] = 'field_s_pub_author_link_target_id';
  $handler->display->display_options['relationships']['field_s_pub_author_link_target_id']['label'] = 'Publication Author';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_sm_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author/editor */
  $handler->display->display_options['fields']['field_s_pub_author_link']['id'] = 'field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['table'] = 'field_data_field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['field'] = 'field_s_pub_author_link';
  $handler->display->display_options['fields']['field_s_pub_author_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publication Type */
  $handler->display->display_options['fields']['field_s_pub_type']['id'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['field'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Publication Year (field_s_publication_year) */
  $handler->display->display_options['sorts']['field_s_publication_year_value']['id'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['field'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_pub_author_link_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_s_pub_author_link_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Author Type (field_s_pub_author_type) */
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['id'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['table'] = 'field_data_field_s_pub_author_type';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['field'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['expose']['operator_id'] = 'field_s_pub_author_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['expose']['label'] = 'Author Type';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['expose']['operator'] = 'field_s_pub_author_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['expose']['identifier'] = 'field_s_pub_author_type_tid';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['vocabulary'] = 'publication_author_type';
  $handler->display->display_options['filters']['field_s_pub_author_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Publication Type (field_s_pub_type) */
  $handler->display->display_options['filters']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['operator_id'] = 'field_s_pub_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['label'] = 'Publication Type';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['operator'] = 'field_s_pub_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['identifier'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_s_pub_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['vocabulary'] = 'publication_type';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Publication Keyword (field_s_pub_keyword) */
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['id'] = 'field_s_pub_keyword_tid';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['table'] = 'field_data_field_s_pub_keyword';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['field'] = 'field_s_pub_keyword_tid';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['expose']['operator_id'] = 'field_s_pub_keyword_tid_op';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['expose']['operator'] = 'field_s_pub_keyword_tid_op';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['expose']['identifier'] = 'field_s_pub_keyword_tid';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['vocabulary'] = 'sociology_publication_keyword';
  $handler->display->display_options['filters']['field_s_pub_keyword_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'publications/search';
  $export['stanford_publications_search'] = $view;

  return $export;
}
