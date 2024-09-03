/*
  +----------------------------------------------------------------------+
  | Copyright (c) The PHP Group                                          |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | https://www.php.net/license/3_01.txt                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Yihang Wang <wangyihanger@gmail.com>                         |
  +----------------------------------------------------------------------+
*/

#ifndef STRING_H
#define STRING_H

typedef struct {
    const char *repr; 
    const unsigned char len;
} char_repr_t;

static const char_repr_t char_reprs[256] = {
	{"\\x00", 4},
	{"\\x01", 4},
	{"\\x02", 4},
	{"\\x03", 4},
	{"\\x04", 4},
	{"\\x05", 4},
	{"\\x06", 4},
	{"\\x07", 4},
	{"\\b", 2},
	{"\\t", 2},
	{"\\n", 2},
	{"\\x0b", 4},
	{"\\f", 2},
	{"\\r", 2},
	{"\\x0e", 4},
	{"\\x0f", 4},
	{"\\x10", 4},
	{"\\x11", 4},
	{"\\x12", 4},
	{"\\x13", 4},
	{"\\x14", 4},
	{"\\x15", 4},
	{"\\x16", 4},
	{"\\x17", 4},
	{"\\x18", 4},
	{"\\x19", 4},
	{"\\x1a", 4},
	{"\\x1b", 4},
	{"\\x1c", 4},
	{"\\x1d", 4},
	{"\\x1e", 4},
	{"\\x1f", 4},
	{" ", 1},
	{"!", 1},
	{"\\\"", 2},
	{"#", 1},
	{"$", 1},
	{"%%", 1},
	{"&", 1},
	{"\'", 1},
	{"(", 1},
	{")", 1},
	{"*", 1},
	{"+", 1},
	{",", 1},
	{"-", 1},
	{".", 1},
	{"/", 1},
	{"0", 1},
	{"1", 1},
	{"2", 1},
	{"3", 1},
	{"4", 1},
	{"5", 1},
	{"6", 1},
	{"7", 1},
	{"8", 1},
	{"9", 1},
	{":", 1},
	{";", 1},
	{"<", 1},
	{"=", 1},
	{">", 1},
	{"?", 1},
	{"@", 1},
	{"A", 1},
	{"B", 1},
	{"C", 1},
	{"D", 1},
	{"E", 1},
	{"F", 1},
	{"G", 1},
	{"H", 1},
	{"I", 1},
	{"J", 1},
	{"K", 1},
	{"L", 1},
	{"M", 1},
	{"N", 1},
	{"O", 1},
	{"P", 1},
	{"Q", 1},
	{"R", 1},
	{"S", 1},
	{"T", 1},
	{"U", 1},
	{"V", 1},
	{"W", 1},
	{"X", 1},
	{"Y", 1},
	{"Z", 1},
	{"[", 1},
	{"\\\\", 2},
	{"]", 1},
	{"^", 1},
	{"_", 1},
	{"`", 1},
	{"a", 1},
	{"b", 1},
	{"c", 1},
	{"d", 1},
	{"e", 1},
	{"f", 1},
	{"g", 1},
	{"h", 1},
	{"i", 1},
	{"j", 1},
	{"k", 1},
	{"l", 1},
	{"m", 1},
	{"n", 1},
	{"o", 1},
	{"p", 1},
	{"q", 1},
	{"r", 1},
	{"s", 1},
	{"t", 1},
	{"u", 1},
	{"v", 1},
	{"w", 1},
	{"x", 1},
	{"y", 1},
	{"z", 1},
	{"{", 1},
	{"|", 1},
	{"}", 1},
	{"~", 1},
	{"\\x7f", 4},
	{"\\x80", 4},
	{"\\x81", 4},
	{"\\x82", 4},
	{"\\x83", 4},
	{"\\x84", 4},
	{"\\x85", 4},
	{"\\x86", 4},
	{"\\x87", 4},
	{"\\x88", 4},
	{"\\x89", 4},
	{"\\x8a", 4},
	{"\\x8b", 4},
	{"\\x8c", 4},
	{"\\x8d", 4},
	{"\\x8e", 4},
	{"\\x8f", 4},
	{"\\x90", 4},
	{"\\x91", 4},
	{"\\x92", 4},
	{"\\x93", 4},
	{"\\x94", 4},
	{"\\x95", 4},
	{"\\x96", 4},
	{"\\x97", 4},
	{"\\x98", 4},
	{"\\x99", 4},
	{"\\x9a", 4},
	{"\\x9b", 4},
	{"\\x9c", 4},
	{"\\x9d", 4},
	{"\\x9e", 4},
	{"\\x9f", 4},
	{"\\xa0", 4},
	{"\\xa1", 4},
	{"\\xa2", 4},
	{"\\xa3", 4},
	{"\\xa4", 4},
	{"\\xa5", 4},
	{"\\xa6", 4},
	{"\\xa7", 4},
	{"\\xa8", 4},
	{"\\xa9", 4},
	{"\\xaa", 4},
	{"\\xab", 4},
	{"\\xac", 4},
	{"\\xad", 4},
	{"\\xae", 4},
	{"\\xaf", 4},
	{"\\xb0", 4},
	{"\\xb1", 4},
	{"\\xb2", 4},
	{"\\xb3", 4},
	{"\\xb4", 4},
	{"\\xb5", 4},
	{"\\xb6", 4},
	{"\\xb7", 4},
	{"\\xb8", 4},
	{"\\xb9", 4},
	{"\\xba", 4},
	{"\\xbb", 4},
	{"\\xbc", 4},
	{"\\xbd", 4},
	{"\\xbe", 4},
	{"\\xbf", 4},
	{"\\xc0", 4},
	{"\\xc1", 4},
	{"\\xc2", 4},
	{"\\xc3", 4},
	{"\\xc4", 4},
	{"\\xc5", 4},
	{"\\xc6", 4},
	{"\\xc7", 4},
	{"\\xc8", 4},
	{"\\xc9", 4},
	{"\\xca", 4},
	{"\\xcb", 4},
	{"\\xcc", 4},
	{"\\xcd", 4},
	{"\\xce", 4},
	{"\\xcf", 4},
	{"\\xd0", 4},
	{"\\xd1", 4},
	{"\\xd2", 4},
	{"\\xd3", 4},
	{"\\xd4", 4},
	{"\\xd5", 4},
	{"\\xd6", 4},
	{"\\xd7", 4},
	{"\\xd8", 4},
	{"\\xd9", 4},
	{"\\xda", 4},
	{"\\xdb", 4},
	{"\\xdc", 4},
	{"\\xdd", 4},
	{"\\xde", 4},
	{"\\xdf", 4},
	{"\\xe0", 4},
	{"\\xe1", 4},
	{"\\xe2", 4},
	{"\\xe3", 4},
	{"\\xe4", 4},
	{"\\xe5", 4},
	{"\\xe6", 4},
	{"\\xe7", 4},
	{"\\xe8", 4},
	{"\\xe9", 4},
	{"\\xea", 4},
	{"\\xeb", 4},
	{"\\xec", 4},
	{"\\xed", 4},
	{"\\xee", 4},
	{"\\xef", 4},
	{"\\xf0", 4},
	{"\\xf1", 4},
	{"\\xf2", 4},
	{"\\xf3", 4},
	{"\\xf4", 4},
	{"\\xf5", 4},
	{"\\xf6", 4},
	{"\\xf7", 4},
	{"\\xf8", 4},
	{"\\xf9", 4},
	{"\\xfa", 4},
	{"\\xfb", 4},
	{"\\xfc", 4},
	{"\\xfd", 4},
	{"\\xfe", 4},
	{"\\xff", 4},
};

#endif
