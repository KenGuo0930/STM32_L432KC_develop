/*
 * Dc_MotorControl
 * Created by Ken 2024.03.21
 *
 */

#include "L293D_MotorControl.h"
#include "tim.h"
#include "main.h"

MOTOR_STATUS MOTOR_Run(uint8_t PWM_Channel, GPIO_TypeDef *Port1, uint8_t Pin1, GPIO_TypeDef *Port2, uint8_t Pin2, float Vlot_value)
{
	if(Vlot_value > 0){
		HAL_GPIO_WritePin(Port1, Pin1, GPIO_PIN_SET);//SET = High
		HAL_GPIO_WritePin(Port2, Pin2, GPIO_PIN_RESET);//Reset = low
		__HAL_TIM_SET_COMPARE(&htim1, PWM_Channel, Vlot_value);
		return MOTOR_FORWARD;

	}
	//reverse
	else if(Vlot_value < 0){
		HAL_GPIO_TogglePin(Port1, Pin1);//Port1 = low
		HAL_GPIO_TogglePin(Port2, Pin2);//Port2 = High
		__HAL_TIM_SET_COMPARE(&htim1, PWM_Channel, Vlot_value);
		return MOTOR_REVERSE;
	}

	else{

		HAL_GPIO_WritePin(Port1, Pin1, GPIO_PIN_RESET);//High
		HAL_GPIO_WritePin(Port2, Pin2, GPIO_PIN_RESET);// low
		return MOTOR_STOP;

	}
	return MOTOR_OK;
}


