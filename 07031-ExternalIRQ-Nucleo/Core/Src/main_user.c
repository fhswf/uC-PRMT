/*
 * main_user.c
 *
 *  Created on: 09.12.2020
 *      Author: Tobias Ellermeyer
 *
 *      EXTERNALIRQ
 *      Nucleo-STM32F103RB-Board with shield
 *
 *      LED0 is toggled when BTN2 is pressed
 *        (via EXTI)
 *
 *      Attention: Ensure that Pull-Up for BTN2
 *                 is active
 *                 (will be disabled when changing
 *                  PB15 to EXTI)
 *
 */

#include "main.h"	// Include HAL and GPIO defines

void main_user()
{
	// Infinite Loop, do nothing in this loop
	while(1)
	{
	}

}

// IRQ Handler EXTI
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_15)
  {
    /* Toggle LED0 */
	HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
  }
}


