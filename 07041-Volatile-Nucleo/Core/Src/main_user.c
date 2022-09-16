/*
 * main_user.c
 *
 *  Created on: 09.12.2020
 *      Author: Tobias Ellermeyer
 *
 *      Volatile
 *      Nucleo-STM32F103RB-Board with shield
 *
 *      LED0 is toggled when BTN2 is pressed
 *        (via EXTI)
 *		-> in addition, global variable is increased
 *		   and LED1 is toggled from while(1)
 *
 *      Attention: Ensure that Pull-Up for BTN2
 *                 is active
 *                 (will be disabled when changing
 *                  PB15 to EXTI)
 *
 */

#include "main.h"	// Include HAL and GPIO defines

uint16_t pressed = 0;		// does not work
//volatile uint16_t pressed = 0;		// works

void main_user()
{
	uint16_t pressed_old;
	// Infinite Loop, do nothing in this loop
	while(1)
	{
		pressed_old = pressed;
		while(pressed_old == pressed);  // Wait for change
	    /* Toggle LED1 */
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);

	}

}

// IRQ Handler EXTI
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_15)
  {
		/* Toggle LED0 */
		HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);

		pressed++;	// Increase pressed
  }
}


