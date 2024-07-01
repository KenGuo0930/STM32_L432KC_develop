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

    if (sscanf(ptr, "%d", index) != 1) {
        fprintf(stderr, "Failed to parse the first integer\n");
        return;
    }


    while (*ptr != ' ' && *ptr != '\0') {
        ++ptr;
    }


    while (*ptr == ' ') {
        ++ptr;
    }

    if (sscanf(ptr, "%lf", value) != 1) {
        fprintf(stderr, "Failed to parse the second double\n");
        return;
    }
}
