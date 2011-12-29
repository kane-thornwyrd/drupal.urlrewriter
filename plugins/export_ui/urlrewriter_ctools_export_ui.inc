<?php

//urlrewriter


/**
 * Define this Export UI plugin.
 */
$plugin = array(
  'schema' => 'url_rewriting', // As defined in hook_schema().
  'access' => 'administer url rewriting', // Define a permission users must have to access these pages.
  // Define the menu item.
  'menu' => array(
    'menu item' => 'urlrewriter',
    'menu title' => 'Url Rewriter',
    'menu description' => 'Administer Url rewriting presets.',
  ),
  // Define user interface texts.
  'title singular' => t('url rewriting'),
  'title plural' => t('url rewritings'),
  'title singular proper' => t('Urlrewriter url rewriting'),
  'title plural proper' => t('urlrewriter url rewritings'),
  // Define the names of the functions that provide the add/edit forms.
  'form' => array(
    'settings' => 'urlrewriter_ctools_export_ui_form',
  // 'submit' and 'validate' are also valid callbacks.
  ),
);

function urlrewriter_ctools_export_ui_form($form, &$form_state) {
  dpm(func_get_args());
  $form = array();

  $form['path'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
  );

  $form['base_url'] = array(
    '#type' => 'textfield',
  );
  $form['prefix'] = array(
    '#type' => 'textfield',
  );
  $form['arguments'] = array(
    '#type' => 'fieldset',
  );
  $form['target'] = array(
    '#type' => 'textfield',
  );
  $form['attributes'] = array(
    '#type' => 'fieldset',
  );

  return $form;
}
