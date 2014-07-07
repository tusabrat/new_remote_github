<?php
/**
 * @file
 * content_type.poll.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'poll',
  'name' => 'Poll',
  'description' => 'A <em>poll</em> is a question with a set of possible responses. A <em>poll</em>, once created, automatically provides a simple running count of the number of votes received for each response.',
  'has_title' => 1,
  'title_label' => 'Question',
  'base' => 'poll',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'permission.create_poll_content' => 'permission.create_poll_content',
  'permission.edit_own_poll_content' => 'permission.edit_own_poll_content',
  'permission.edit_any_poll_content' => 'permission.edit_any_poll_content',
  'permission.delete_own_poll_content' => 'permission.delete_own_poll_content',
  'permission.delete_any_poll_content' => 'permission.delete_any_poll_content',
);

$modules = array(
  0 => 'poll',
);
