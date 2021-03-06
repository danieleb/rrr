<?php
/**
 * @file
 * rrr_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rrr_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rrr_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('static page'),
      'base' => 'node_content',
      'description' => t('a static page used for contacts, about us, welcome page, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
