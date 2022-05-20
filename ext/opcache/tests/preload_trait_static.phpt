--TEST--
Preload trait with static variables in method
--INI--
opcache.enable=1
opcache.enable_cli=1
opcache.optimization_level=-1
opcache.preload={PWD}/preload_trait_static.inc
--EXTENSIONS--
opcache
--SKIPIF--
<?php
if (PHP_OS_FAMILY == 'Windows') die('skip Preloading is not supported on Windows');
?>
--XFAIL--
GH-8588
--FILE--
<?php
$bar = new Bar;
$bar->test();
?>
--EXPECT--
NULL
