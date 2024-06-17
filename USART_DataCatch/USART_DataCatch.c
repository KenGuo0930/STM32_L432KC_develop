/*
 * USART_DataCatch.c
 *
 *  Created on: Jun 17, 2024
 *      Author: User
 */
#include "USART_DataCatch.h"
#include <stdio.h>
#include <stdlib.h>


void parseDoubles(const char *str, double *values, int valueCount) {
    const char *ptr = str;
    for (int i = 0; i < valueCount; ++i) {
        if (sscanf(ptr, "%lf", &values[i]) != 1) {
            fprintf(stderr, "Failed to parse double at index %zu\n", i);
            break;
        }
        // 移动??��?�到下�?个空?��??��?�置
        while (*ptr != ' ' && *ptr != '\0') {
            ++ptr;
        }
        // 跳�?�空?��
        while (*ptr == ' ') {
            ++ptr;
        }
    }
}
