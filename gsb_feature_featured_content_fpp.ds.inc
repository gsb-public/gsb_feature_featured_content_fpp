<?php
/**
 * @file
 * gsb_feature_featured_content_fpp.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_featured_content_fpp_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_featured_item|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_featured_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'media_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'field_editorial_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_featured_content_fpp_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_other_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_featured_item|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|featured_content|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'featured_content';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_featured_item' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'show-more-less show-more-less-num-3 show-more-less-min-5',
          'lb-def-at' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-type-field-collection show-more-less show-more-less-num-3 show-more-less-min-5',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h1',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|featured_content|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_featured_content_fpp_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_featured_item|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_featured_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_related_other_label',
      ),
      'left' => array(
        1 => 'media_icon',
        2 => 'field_featured_content_fpp_ref',
        3 => 'field_link_single',
        4 => 'field_editorial_summary',
      ),
      'right' => array(
        5 => 'field_image_single_public',
      ),
    ),
    'fields' => array(
      'field_related_other_label' => 'header',
      'media_icon' => 'left',
      'field_featured_content_fpp_ref' => 'left',
      'field_link_single' => 'left',
      'field_editorial_summary' => 'left',
      'field_image_single_public' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['field_collection_item|field_featured_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|featured_content|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'featured_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_featured_item',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_featured_item' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|featured_content|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_featured_content_fpp_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'alumni_featured_content';
  $ds_view_mode->label = 'Alumni featured content';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'node' => 'node',
  );
  $export['alumni_featured_content'] = $ds_view_mode;

  return $export;
}
