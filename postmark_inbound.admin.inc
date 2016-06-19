<?php
/**
 * @file
 * Administrative functions.
 */

/**
 * Menu callback for admin settings.
 */
function postmark_inbound_settings_form() {
  $form = array();

  $form['postmark_inbound_email_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Email domain'),
    '#default_value' => variable_get('postmark_inbound_email_domain', 'example.co.uk'),
  );

  return system_settings_form($form);
}
