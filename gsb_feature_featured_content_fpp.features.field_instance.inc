<?php
/**
 * @file
 * gsb_feature_featured_content_fpp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_featured_content_fpp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-featured_content-field_featured_item'
  $field_instances['fieldable_panels_pane-featured_content-field_featured_item'] = array(
    'bundle' => 'featured_content',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_featured_item',
    'label' => 'Featured Item',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'field_collection_embed',
      'weight' => -4,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Item');

  return $field_instances;
}
