/*
 * main_user.c
 *
 *  Created on: 09.12.2020
 *      Author: Tobias Ellermeyer
 *
 *      TimerPWM
 *      Nucleo-STM32F103RB-Board with shield
 *
 *      Dimming of blue LED in RGB-LED
 *
 *      using TIM1_CH1 / PA8
 *
 */

#include "main.h"	// Include HAL and GPIO defines

// Handle for Timer1; defined in main.c
extern TIM_HandleTypeDef htim1;


void main_user()
{
	uint16_t val;

	// LED 0 permanently on
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);

	/*
	 *  TIMER CONFIGURATION FOM STM32CubeMX:
	 *
	 *  cf. Slide 6-25
	 *
	 *  f_PWM approx 10 kHz  / Range 0 ... 100% in 1% steps
	 *
	 *  PSC=70 / ARR = 100
	 *
	 *  f= CK_IN / ((PSC+1)*(ARR+1)) = 72 MHz / (70 * 101) = 10.04 kHz
	 *
	 *  PWM-Mode 1
	 *
	 */

	// Start PWM-Mode in Timer 1 / Channel 1
	HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);

	/* Set Intensity / Duty Cycle to Zero at beginning */
	__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,0);

	val = 0;
	// Infinite loop
	while(1)
	{
		// Dim up / down in 10 % steps ..

		// do a little trick: val >100 -> dim down
		val+=10;
		if (val>200) val = 0;

		if (val <= 100)	// dim up
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,val);
		}
		else	// dim down
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,200-val);
		}

		// Sleep for 100ms
		HAL_Delay(100);

	}
}
