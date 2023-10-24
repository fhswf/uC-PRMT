/*
  ___          _____     __  __
   _/    _  _ (_  | |\/|  _)  _)
  /__|_||||(_)__) | |  | __) /__

 Fachhochschule Suedwestfalen
 Mechatronik/Mikrocomputer
 Prof. Dr.-Ing. Tobias Ellermeyer

 File: distance.c
 Path:  zumolib/src/zumo

 Created:    02.12.2019
 Author:     Tobias Ellermeyer
*/

#include <zumo/vl53l0x.h>
#include <zumo/gpio_sx1508.h>
#include <zumo/distance.h>
#include "main.h"


/**
 @file distance.c
 @brief High-Level Time-of-Flight distance measuring

 Example for simple period measurement

 @code
 	 	#include <zumo/distance.h>

		uint16_t ranges[5];
		distance_init();
		distance_start_scan();	// start initial measurement, takes 20...30ms
		...

		while(1)
		{
		   distance_get_scan_values(ranges);  // read all five ranges
		   distance_start_scan();			  // immediately start new measurement
		   ...
		   further calculations
		   ...
		}
@endcode

 @author Tobias Ellermeyer
 */


/**
 * @brief Initialize all five distance sensors
 *
 * @return
 *    0: ok
 *   !=0: error
 */
uint8_t distance_init()
{
	// Initialize the GPIO Expander IC
    gpio_sx1508_init();

	// Assign Front sensor to new I2C-Address
	VL53L0X_address=0x29;
	gpio_sx1508_out(TOF_ENABLE_FF);
	HAL_Delay(20); // Wait for Sensor Power up
	//if (VL53L0X_pingAddress(VL53L0X_address)) return 1; // Check if sensor present
	VL53L0X_setAddress(TOF_I2CADDR_FF);	// New address

	// Assign Front/Left sensor to new I2C-Address
	VL53L0X_address=0x29;
	// Already moved sensors must be kept enabled
	// otherwise they are resetted to default address
	gpio_sx1508_out(TOF_ENABLE_FL|TOF_ENABLE_FF);
	HAL_Delay(20);
	//if (VL53L0X_pingAddress(VL53L0X_address)) return 2;
	VL53L0X_setAddress(TOF_I2CADDR_FL);

	// Assign Front/Right sensor to new I2C-Address
	VL53L0X_address=0x29;
	gpio_sx1508_out(TOF_ENABLE_FR|TOF_ENABLE_FL|TOF_ENABLE_FF);
	HAL_Delay(20);
	//if (VL53L0X_pingAddress(VL53L0X_address)) return 3;
	VL53L0X_setAddress(TOF_I2CADDR_FR);

	// Assign Right sensor to new I2C-Address
	VL53L0X_address=0x29;
	gpio_sx1508_out(TOF_ENABLE_FR|TOF_ENABLE_FL|TOF_ENABLE_FF|TOF_ENABLE_RR);
	HAL_Delay(20);
	//if (VL53L0X_pingAddress(VL53L0X_address)) return 4;
	VL53L0X_setAddress(TOF_I2CADDR_RR);

	// Assign Left sensor to new I2C-Address
	VL53L0X_address=0x29;
	gpio_sx1508_out(TOF_ENABLE_ALL);
	HAL_Delay(20);
	//if (VL53L0X_pingAddress(VL53L0X_address)) return 5;
	VL53L0X_setAddress(TOF_I2CADDR_LL);
	//scan_i2c();

	// Initalize all Sensors
	VL53L0Xm_init(TOF_I2CADDR_FF,1);
	VL53L0X_setSignalRateLimit(2.5);
	VL53L0X_setMeasurementTimingBudget(30000);
	VL53L0Xm_init(TOF_I2CADDR_FL,1);
	VL53L0X_setSignalRateLimit(2.5);
	VL53L0X_setMeasurementTimingBudget(30000);
	VL53L0Xm_init(TOF_I2CADDR_FR,1);
	VL53L0X_setSignalRateLimit(2.5);
	VL53L0X_setMeasurementTimingBudget(30000);
	VL53L0Xm_init(TOF_I2CADDR_RR,1);
	VL53L0X_setSignalRateLimit(2.5);
	VL53L0X_setMeasurementTimingBudget(30000);
	VL53L0Xm_init(TOF_I2CADDR_LL,1);
	VL53L0X_setSignalRateLimit(2.5);
	VL53L0X_setMeasurementTimingBudget(30000);
	return 0;
}

/**
 * @brief start a single measurement (waits for result)
 *
 * @param sensor: value (defined macro) which sensor to use
 *
 *    Value/Macro      	|  Description
 *    ------------------|-----------------------------------
 *    TOF_I2CADDR_FF	| Front sensor (straight ahead)
 *    TOF_I2CADDR_FR	| Front sensor (45 deg right)
 *    TOF_I2CADDR_FL	| Front sensor (45 deg left)
 *    TOF_I2CADDR_RR	| Side sensor (right)
 *    TOF_I2CADDR_LL	| Side sensor (left)
 *
 *
 * @return
 *   distance in millimeters (0=error / 999=no target in range)
 */
uint16_t distance_single_mm(uint8_t sensor)
{
	if ( (sensor==TOF_I2CADDR_FF) ||
		(sensor==TOF_I2CADDR_FR) ||
		(sensor==TOF_I2CADDR_FL) ||
		(sensor==TOF_I2CADDR_RR) ||
		(sensor==TOF_I2CADDR_LL) )
	{
	VL53L0X_address = sensor;
	}
	else
	{
		return 0;
	}

	return VL53L0X_readRangeSingleMillimeters();
}


/**
 * @brief Read out all five sensors with one command
 *
 * @param values: pointer to uint16_t array with 5 entries

 *    Array element    	|  Description
 *    ------------------|-----------------------------------
 *    values[0]			| Front sensor (straight ahead)
 *    values[1]			| Front sensor (45 deg left)
 *    values[2]			| Front sensor (45 deg right)
 *    values[3]			| Side sensor (left)
 *    values[4]			| Side sensor (right) *
 *
 * @return
 *   0 		: ok
 *   !=0 	: error
 */
uint8_t distance_get_scan_values(uint16_t *values)
{
	values[0] = VL53L0Xm_readRangeContinuousMillimeters(TOF_I2CADDR_FF);
	values[1] = VL53L0Xm_readRangeContinuousMillimeters(TOF_I2CADDR_FL);
	values[2] = VL53L0Xm_readRangeContinuousMillimeters(TOF_I2CADDR_FR);
	values[3] = VL53L0Xm_readRangeContinuousMillimeters(TOF_I2CADDR_LL);
	values[4] = VL53L0Xm_readRangeContinuousMillimeters(TOF_I2CADDR_RR);
	return 0;
}

/**
 * @brief Start measurement on all five sensors simultaneously
 *
 * @return
 *   0 		: ok
 *   !=0 	: error
 */
uint8_t distance_start_scan()
{
	VL53L0X_startSingle(TOF_I2CADDR_FF);
	VL53L0X_startSingle(TOF_I2CADDR_FL);
	VL53L0X_startSingle(TOF_I2CADDR_FR);
	VL53L0X_startSingle(TOF_I2CADDR_LL);
	VL53L0X_startSingle(TOF_I2CADDR_RR);
	return 0;
}
/*
uint8_t distance_start_scan()
{
	VL53L0Xm_startContinuous(TOF_I2CADDR_FF,0);
	VL53L0Xm_startContinuous(TOF_I2CADDR_FL,0);
	VL53L0Xm_startContinuous(TOF_I2CADDR_FR,0);
	VL53L0Xm_startContinuous(TOF_I2CADDR_LL,0);
	VL53L0Xm_startContinuous(TOF_I2CADDR_RR,0);
	return 0;
}
*/
