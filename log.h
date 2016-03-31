/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2016 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: maben <www.maben@foxmail.com>                                |
  +----------------------------------------------------------------------+
*/

#ifndef __LOG_H__
#define __LOG_H__

#define CFC_LOG_LEVEL_DEBUG   0
#define CFC_LOG_LEVEL_NOTICE  1
#define CFC_LOG_LEVEL_WARN   2
#define CFC_LOG_LEVEL_ERROR   3

int cfc_init_log(char *file, int mark);
void cfc_log(int level, char *fmt, ...);
void cfc_destroy_log();
FILE *cfc_log_get_fp();

#define CFC_LOG_DEBUG(fmt, ...) \
    cfc_log(CFC_LOG_LEVEL_DEBUG, fmt, ##__VA_ARGS__)

#define CFC_LOG_NOTICE(fmt, ...) \
    cfc_log(CFC_LOG_LEVEL_NOTICE, fmt, ##__VA_ARGS__)

#define CFC_LOG_WARN(fmt, ...) \
    cfc_log(CFC_LOG_LEVEL_WARN, fmt, ##__VA_ARGS__)

#define CFC_LOG_ERROR(fmt, ...) \
    cfc_log(CFC_LOG_LEVEL_ERROR, fmt, ##__VA_ARGS__)
#endif