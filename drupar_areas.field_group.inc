<?php
/**
 * @file
 * drupar_areas.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupar_areas_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_autoridad|node|area|form';
  $field_group->group_name = 'group_autoridad';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_estructura';
  $field_group->data = array(
    'label' => 'Autoridad del Área',
    'weight' => '61',
    'children' => array(
      0 => 'field_autoridad_cargo',
      1 => 'field_autoridad_descripcion',
      2 => 'field_autoridad_foto',
      3 => 'field_autoridad_nombre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-autoridad field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_autoridad|node|area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacto|node|area|form';
  $field_group->group_name = 'group_contacto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '49',
    'children' => array(
      0 => 'field_codigo_postal',
      1 => 'field_correo_electronico',
      2 => 'field_direccion',
      3 => 'field_telefono',
      4 => 'field_facebook',
      5 => 'field_twitter',
      6 => 'field_instagram',
      7 => 'field_youtube',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contacto field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contacto|node|area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_estructura|node|area|form';
  $field_group->group_name = 'group_estructura';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estructura',
    'weight' => '6',
    'children' => array(
      0 => 'field_niveles_jerarquicos',
      1 => 'group_autoridad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-estructura field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_estructura|node|area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|area|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_featured_image',
      2 => 'field_links_relacionados',
      3 => 'field_paginas_relacionadas',
      4 => 'group_group',
      5 => 'metatags',
      6 => 'title',
      7 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_general|node|area|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Autoridad del Área');
  t('Contacto');
  t('Estructura');
  t('General');

  return $field_groups;
}
