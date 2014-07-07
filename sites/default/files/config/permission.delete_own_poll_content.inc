<?php
/**
 * @file
 * permission.delete_own_poll_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own poll content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.poll' => 'content_type.poll',
);

$optional = array();

$modules = array(
  0 => 'node',
);
