<?php

/**
 * @file
 *   Contain all the administration interface.
 */

function urlrewriter_admin(array $form, &$form_state) {
  $form['#tree'] = TRUE;
  dpm($form);
  dpm($form_state);


  return system_settings_form($form);
}