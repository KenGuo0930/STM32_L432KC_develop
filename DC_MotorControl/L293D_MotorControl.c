/*
 * Dc_MotorControl
 * Created by Ken 2024.03.21
 *
 */

#include "L293D_MotorControl.h"
#include "tim.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

MOTOR_STATUS MOTOR_Run(MOTOR motor, float Vlot_value, int index)
{
	if(Vlot_value > 0){
		HAL_GPIO_WritePin(motor.Port1, motor.Pin1, GPIO_PIN_SET);//SET = High
		HAL_GPIO_WritePin(motor.Port2, motor.Pin2, GPIO_PIN_RESET);//Reset = low
		__HAL_TIM_SET_COMPARE(&motor.htim, motor.Channel, Vlot_value);
		printf("Motor %d: forward\n", index +1);
		return MOTOR_FORWARD;

	}
	//reverse
	else if(Vlot_value < 0){
		Vlot_value = abs(Vlot_value);
		HAL_GPIO_WritePin(motor.Port1, motor.Pin1, GPIO_PIN_RESET);//Port1 = low
		HAL_GPIO_WritePin(motor.Port2, motor.Pin2, GPIO_PIN_SET);//Port2 = High
		__HAL_TIM_SET_COMPARE(&motor.htim, motor.Channel, Vlot_value);
		printf("Motor %d: reverse\n", index +1);
		return MOTOR_REVERSE;
	}

	else{
		HAL_GPIO_WritePin(motor.Port1, motor.Pin1, GPIO_PIN_RESET);// low
		HAL_GPIO_WritePin(motor.Port2, motor.Pin2, GPIO_PIN_RESET);// low
		return MOTOR_STOP;

	}
	return MOTOR_OK;
}


