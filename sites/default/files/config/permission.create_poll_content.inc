<?php
/**
 * @file
 * permission.create_poll_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create poll content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.poll' => 'content_type.poll',
);

$optional = array();

$modules = array(
  0 => 'node',
);
