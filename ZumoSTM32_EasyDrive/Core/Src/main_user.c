/*
  ___          _____     __  __
   _/    _  _ (_  | |\/|  _)  _)
  /__|_||||(_)__) | |  | __) /__

 Fachhochschule S�dwestfalen
 Mechatronik/Mikrocomputer
 Prof. Dr.-Ing. Tobias Ellermeyer

 file: main_user.c
 path:  src

 created:    10.09.2019
 author:       Tobias Ellermeyer
*/


#include "main.h"
#include <stdio.h>
#include <zumo/display.h>
#include <zumo/motors.h>
#include <zumo/bno055.h>
#include <zumo/distance.h>
#include <zumo/vl53l0x.h>
#include <zumo/uart.h>
#include <zumo/bluetooth.h>

#include "testing.h"

#define WITH_TESTING		// Uncomment to remove test menu option (saves approx. 10k flash memory)

void driving();				// Prototype for simple driving

void main_user()
{
	uint8_t status;

	display_init();		// initialize display driver
#ifdef WITH_TESTING
	display_gotoxy(20,7);
	display_println("Hold <USR> to enter Test");
#endif

	motors_init();		// initialize motor driver

	uart_init();		// switch printf to usb/serial
	HAL_Delay(100);
	printf("\r\n****   HERE we GO  ****\r\n\r\n");

	// initialize bluetooth
	status = bt_init();
	if (status)
	{
		printf("***ERROR*** bt_init() returned %i\r\n",status);
		Error_Handler();	// Do SOS blinking
	}

	// initialize distance measurement
	status=distance_init();
	if (status)
	{
		printf("***ERROR*** distance_init() returned %i\r\n",status);
		Error_Handler();	// Do SOS blinking
	}

	// BNO055 IMU initialization
    bno055_setup();
    bno055_setOperationModeNDOF();
    HAL_Delay(100);


#ifdef WITH_TESTING
	// Check if Button <USR> is pressed -> Enter test menu
	// --> see Src/testing.c for details how to control most of the peripherals
    if (HAL_GPIO_ReadPin(BTN_USR_GPIO_Port,BTN_USR_Pin)==0)
    	{
    	test_menu(0);
    	}
#endif

    //**********************************************************************
    // GO TO THE "SIMPLE" USER CODE PART
    //**********************************************************************
    driving();


	while(1)
	{
		Error_Handler();	// Never should get here..
	}

}
