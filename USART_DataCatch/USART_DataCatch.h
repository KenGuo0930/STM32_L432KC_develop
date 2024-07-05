/*
 * USART_DataCatch.h
 *
 *  Created on: Jun 17, 2024
 *      Author: User
 */
#include <stdio.h>
#include <stdlib.h>



// Parsing index and value from USART
void parseTwoValues(const char *str, int *index, double *value);

//transfer volt date to CCR value(Capture/Compare Register)
double Volt_CCR_Transfer(double MAX_CCR, double MAX_volt, double Capture_volt);
