/*
 * USART_DataCatch.c
 *
 *  Created on: Jun 17, 2024
 *      Author: User
 */
#include "USART_DataCatch.h"
#include <stdio.h>
#include <stdlib.h>


void parseTwoValues(const char *str, int *index, double *value) {
    const char *ptr = str;

    // 解析第一个整数
    if (sscanf(ptr, "%d", index) != 1) {
        fprintf(stderr, "Failed to parse the first integer\n");
        return;
    }

    // 移动指针，跳过已经解析的部分
    while (*ptr != ' ' && *ptr != '\0') {
        ++ptr;
    }

    // 跳过空格
    while (*ptr == ' ') {
        ++ptr;
    }

    // 解析第二个浮点数
    if (sscanf(ptr, "%lf", value) != 1) {
        fprintf(stderr, "Failed to parse the second double\n");
        return;
    }
}
