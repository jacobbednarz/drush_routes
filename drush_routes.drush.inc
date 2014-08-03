<?php

/**
 * Register the drush command.
 */
function drush_routes_drush_command() {
  $items = array();

  $items['routes'] = array(
    'description' => 'Displays all available routes on a site.',
    'options' => array(
      'exclue' => 'Exclude a module from the outputted listing.',
    ),
    'examples' => array(
      'drush routes' => 'Get all the available routes on a site.',
    ),
    'aliases' => array('r'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

/**
 * Output all the available routes.
 */
function drush_drush_routes_routes() {
  $items = module_implements('menu');
  sort($items);

  // Create the row headers.
  $routes = array(
    array(
      'Module name',
      'Path',
      'Filename'
    )
  );

  foreach($items as $module) {
    $module_info = module_invoke($module, 'menu');

    foreach ($module_info as $path => $info) {
      $file = (isset($info['file'])) ? $info['file'] : "{$module}.module";
      $routes[] = array(
        $module,
        preg_replace('/%([a-z0-9_]*)/i', '*', $path),
        $file,
     );
    }
  }

  // Output all the routes in a table format.
  drush_print_table($routes);
}
