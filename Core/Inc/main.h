/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define motor5_control_pin2_Pin GPIO_PIN_0
#define motor5_control_pin2_GPIO_Port GPIOA
#define motor5_control_pin1_Pin GPIO_PIN_1
#define motor5_control_pin1_GPIO_Port GPIOA
#define motor5_PWM_pin_Pin GPIO_PIN_2
#define motor5_PWM_pin_GPIO_Port GPIOA
#define motor4_control_pin2_Pin GPIO_PIN_3
#define motor4_control_pin2_GPIO_Port GPIOA
#define motor4_control_pin1_Pin GPIO_PIN_4
#define motor4_control_pin1_GPIO_Port GPIOA
#define motor1_control_pin_2_Pin GPIO_PIN_0
#define motor1_control_pin_2_GPIO_Port GPIOB
#define motor3_PWM_pin_Pin GPIO_PIN_8
#define motor3_PWM_pin_GPIO_Port GPIOA
#define motor1_PWM_pin_Pin GPIO_PIN_9
#define motor1_PWM_pin_GPIO_Port GPIOA
#define motor2_PWM_pin_Pin GPIO_PIN_10
#define motor2_PWM_pin_GPIO_Port GPIOA
#define motor4_PWM_pin_Pin GPIO_PIN_11
#define motor4_PWM_pin_GPIO_Port GPIOA
#define motor1_control_pin1_Pin GPIO_PIN_12
#define motor1_control_pin1_GPIO_Port GPIOA
#define motor3_control_pin2_Pin GPIO_PIN_4
#define motor3_control_pin2_GPIO_Port GPIOB
#define motor3_control_pin1_Pin GPIO_PIN_5
#define motor3_control_pin1_GPIO_Port GPIOB
#define motor2_control_pin2_Pin GPIO_PIN_6
#define motor2_control_pin2_GPIO_Port GPIOB
#define motor2_control_pin1_Pin GPIO_PIN_7
#define motor2_control_pin1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
