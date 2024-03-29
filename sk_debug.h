/**
 * @file sk_debug.h
 * @author leoli (jafee201153@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-12-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __SK_DEBUG_H
#define __SK_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exported types ------------------------------------------------------------*/

/* Exported define -----------------------------------------------------------*/

/**
 * @brief printf color
 * @note usage: printf(RED "Hello world" NONE "\n");
 */
#define NONE              "\033[m"
#define RED               "\033[0;32;31m"
#define LIGHT_RED         "\033[1;31m"
#define GREEN             "\033[0;32;32m"
#define LIGHT_GREEN       "\033[1;32m"
#define BLUE              "\033[0;32;34m"
#define LIGHT_BLUE        "\033[1;34m"
#define DARY_GRAY         "\033[1;30m"
#define CYAN              "\033[0;36m"
#define LIGHT_CYAN        "\033[1;36m"
#define PURPLE            "\033[0;35m"
#define LIGHT_PURPLE      "\033[1;35m"
#define BROWN             "\033[0;33m"
#define YELLOW            "\033[1;33m"
#define LIGHT_GRAY        "\033[0;37m"
#define WHITE             "\033[1;37m"

/* Exported constants --------------------------------------------------------*/

/* Exported functions prototypes ---------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

#define DEBUG_LEVEL_NONE  0
#define DEBUG_LEVEL_ERROR 1
#define DEBUG_LEVEL_WARN  2
#define DEBUG_LEVEL_INFO  3

#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL DEBUG_LEVEL_INFO
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_ERROR)
#define DEBUG_LOG_ERROR(fmt, ...) printf(LIGHT_RED "[ERROR] " NONE fmt, ##__VA_ARGS__)
#else
#define DEBUG_LOG_ERROR(fmt, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_WARN)
#define DEBUG_LOG_WARN(fmt, ...) printf(YELLOW "[WARN] " NONE fmt, ##__VA_ARGS__)
#else
#define DEBUG_LOG_WARN(fmt, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_INFO)
#define DEBUG_LOG_INFO(fmt, ...) printf(NONE "[INFO] " NONE fmt, ##__VA_ARGS__)
#else
#define DEBUG_LOG_INFO(fmt, ...)
#endif

#ifdef __cplusplus
}
#endif

#endif  // __SK_DEBUG_H
