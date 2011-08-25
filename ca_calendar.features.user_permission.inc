<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: create calendar_event content
  $permissions['create calendar_event content'] = array(
    'name' => 'create calendar_event content',
    'roles' => array(
      '0' => 'calendar event administrator',
      '1' => 'calendar event creator',
    ),
  );

  // Exported permission: delete any calendar_event content
  $permissions['delete any calendar_event content'] = array(
    'name' => 'delete any calendar_event content',
    'roles' => array(
      '0' => 'calendar event administrator',
    ),
  );

  // Exported permission: delete own calendar_event content
  $permissions['delete own calendar_event content'] = array(
    'name' => 'delete own calendar_event content',
    'roles' => array(
      '0' => 'calendar event administrator',
      '1' => 'calendar event creator',
    ),
  );

  // Exported permission: edit any calendar_event content
  $permissions['edit any calendar_event content'] = array(
    'name' => 'edit any calendar_event content',
    'roles' => array(
      '0' => 'calendar event administrator',
    ),
  );

  // Exported permission: edit own calendar_event content
  $permissions['edit own calendar_event content'] = array(
    'name' => 'edit own calendar_event content',
    'roles' => array(
      '0' => 'calendar event administrator',
      '1' => 'calendar event creator',
    ),
  );

  return $permissions;
}
