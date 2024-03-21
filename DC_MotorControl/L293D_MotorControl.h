/*
 * Dc_MotorControl
 * Created by Ken 2024.03.21
 *
 */

#include "main.h"

//type define

typedef enum{

	MOTOR_FORWARD, //Forward rotation
	MOTOR_REVERSE, // Backward/Reverse rotation
	MOTOR_STOP, // STOP

}MOTOR_STATUS;

# define MOTOR_WAIT 0// Wait for GPIO output signal

MOTOR_STATUS MOTOR_Run(uint8_t PWM_Channel, uint8_t GPIO_Port1,  uint8_t GPIO_Port2, float value);
