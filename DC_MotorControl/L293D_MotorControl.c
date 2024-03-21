/*
 * Dc_MotorControl
 * Created by Ken 2024.03.21
 *
 */

#include "L293D_MotorControl.h"
#include "main.h"

MOTOR_STATUS MOTOR_Run(uint8_t PWM_Channel, uint8_t Port1, uint8_t Pin1, uint8_t Port2, uint8_t Pin2, float Vlot_value)
{
	if(value > 0){
		HAL_GPIO_WritePin(Port1, Pin1, GPIO_PIN_SET);//SET = High
		HAL_GPIO_WritePin(Port2, Pin2, GPIO_PIN_RESET);//Reset = low


	}
	else if(value < 0){
		HAL_GPIO_TogglePin(Port1, Pin1);
		HAL_GPIO_TogglePin(Port2, Pin2);
	}

	else{

	}

}

MOTOR_STATUS MOTOR_forward(uint8_t PWM_Channel, uint8_t GPIO_Port1,  uint8_t GPIO_Port2, float Vlot_value)
{
	HAL_GPIO_WritePin(GPIO_Port1);
}

MOTOR_STATUS MOTOR_backward(uint8_t PWM_Channel, uint8_t GPIO_Port1,  uint8_t GPIO_Port2, float Vlot_value)
{
	HAL_GPIO_
}
