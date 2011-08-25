<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_calendar_user_default_roles() {
  $roles = array();

  // Exported role: calendar event administrator
  $roles['calendar event administrator'] = array(
    'name' => 'calendar event administrator',
  );

  // Exported role: calendar event creator
  $roles['calendar event creator'] = array(
    'name' => 'calendar event creator',
  );

  return $roles;
}
