<?php

/**
 * @file
 *   Adds an option to validate arguments as statuses.
 */

/**
 * Validate whether an argument represents a status or not.
 */
class facebook_status_plugin_argument_validate extends views_plugin_argument_validate {
  var $option_name = 'validate_argument_status';
  function validate_argument($argument) {
    return (bool) db_query("SELECT 1 FROM {facebook_status} WHERE sid = :sid", array(':sid' => $argument))->fetchField();
  }
}
