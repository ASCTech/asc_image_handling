<?php
/**
 * @file
 * asc_image_handling.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_image_handling_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
