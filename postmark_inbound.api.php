<?php

/**
 * @file
 * Describe hooks provided by the Postmark Inbound module.
 */

/**
 * Alter argument that sends to Rules.
 *
 * @see postmark_inbound_callback()
 */
function hook_postmark_inbound_alter(&$args) {
  $args['text']['value'] = t('hello');
}
