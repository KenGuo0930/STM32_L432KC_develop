/*
 * Dc_MotorControl
 * Created by Ken 2024.03.21
 *
 */

#include "main.h"
#include "tim.h"
//type define
typedef enum{
	MOTOR_OK = 0,
	MOTOR_ERROR = 1,
	MOTOR_FORWARD = 2, //Forward rotation
	MOTOR_REVERSE = 3, // Backward/Reverse rotation
	MOTOR_STOP = 4, // STOP

}MOTOR_STATUS;


MOTOR_STATUS MOTOR_Run(uint8_t PWM_Channel, GPIO_TypeDef *Port1, uint16_t Pin1, GPIO_TypeDef *Port2, uint16_t Pin2, float Vlot_value);
