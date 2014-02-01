<?php
/**
 * @file
 * stanford_publications_views_sociology.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_publications_views_sociology_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_faculty_page';
  $context->description = 'Faculty type publication pages';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications/faculty' => 'publications/faculty',
        'publications/85' => 'publications/85',
        'publications/faculty/*' => 'publications/faculty/*',
        'publications/85/*' => 'publications/85/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-17e39d8d48f79e3a6649a04dc84ff769' => array(
          'module' => 'views',
          'delta' => '17e39d8d48f79e3a6649a04dc84ff769',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-publications_recent-book_block' => array(
          'module' => 'views',
          'delta' => 'publications_recent-book_block',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-3d65c8c93f99d78e9de39b239012f0d1' => array(
          'module' => 'views',
          'delta' => '3d65c8c93f99d78e9de39b239012f0d1',
          'region' => 'content_lower',
          'weight' => '-9',
        ),
        'views-publications_recent-news_block' => array(
          'module' => 'views',
          'delta' => 'publications_recent-news_block',
          'region' => 'content_lower',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Faculty type publication pages');
  t('Publications');
  $export['publications_faculty_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_search';
  $context->description = 'Search page in Publications section';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications/search' => 'publications/search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-17e39d8d48f79e3a6649a04dc84ff769' => array(
          'module' => 'views',
          'delta' => '17e39d8d48f79e3a6649a04dc84ff769',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'bean-jumpstart-publications-something' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-publications-something',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  t('Search page in Publications section');
  $export['publications_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_student_page';
  $context->description = 'Student type publication pages';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications/student' => 'publications/student',
        'publications/87' => 'publications/87',
        'publications/student/*' => 'publications/student/*',
        'publications/87/*' => 'publications/87/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-17e39d8d48f79e3a6649a04dc84ff769' => array(
          'module' => 'views',
          'delta' => '17e39d8d48f79e3a6649a04dc84ff769',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-publications_recent-block_1' => array(
          'module' => 'views',
          'delta' => 'publications_recent-block_1',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-publications_recent-block_2' => array(
          'module' => 'views',
          'delta' => 'publications_recent-block_2',
          'region' => 'content_lower',
          'weight' => '-9',
        ),
        'views-publications_recent-block_3' => array(
          'module' => 'views',
          'delta' => 'publications_recent-block_3',
          'region' => 'content_lower',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  t('Student type publication pages');
  $export['publications_student_page'] = $context;

  return $export;
}
