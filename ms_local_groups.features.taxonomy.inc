<?php
/**
 * @file
 * ms_local_groups.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_local_groups_taxonomy_default_vocabularies() {
  return array(
    'ms_local_group' => array(
      'name' => 'Local Group',
      'machine_name' => 'ms_local_group',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
