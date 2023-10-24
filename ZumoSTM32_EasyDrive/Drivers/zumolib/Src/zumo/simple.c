/*
  ___          _____     __  __
   _/    _  _ (_  | |\/|  _)  _)
  /__|_||||(_)__) | |  | __) /__

 Fachhochschule Suedwestfalen
 Mechatronik/Mikrocomputer
 Prof. Dr.-Ing. Tobias Ellermeyer

 File: simple.c
 Path:  zumolib/src/zumo

 Created:	   01.05.2023
 Author:       Tobias Ellermeyer
*/

#include "zumo/simple.h"
#include "zumo/motors.h"
#include <zumo/bno055.h>
#include <zumo/display.h>
#include <zumo/distance.h>

// Private Prototype for error / collision
static void col_detect();
//**************************************
void forward(int32_t mm)
{
	uint16_t range[5];  // FF, FL, FR, LL, RR
	int32_t nowl,nowr;
	int8_t left=40;		//verstehe nicht warum das nicht mit int16_t funktioniert
	int8_t right=40;
	int8_t start=40;
	distance_start_scan();
	HAL_Delay(100);
	distance_get_scan_values(range);
	distance_start_scan();

	nowl = motors_encoder_left();
	nowr = motors_encoder_right();
	while(motors_encoder_left()<=((2.67*mm)+nowl))
	{

		distance_get_scan_values(range);
		distance_start_scan();
		motors_set_both_pwm(left,right);
		if ((motors_encoder_left()-nowl)>(motors_encoder_right()-nowr))
		{
			left -=1;
			right=start;
		}
		else if ((motors_encoder_left()-nowl)<(motors_encoder_right()-nowr))
		{
			right -=1;
			left = start;
		}
		else
		{
			right = start;
			left = start;
		}
		motors_set_both_pwm(left,right);
		col_detect(range);
	}
	motors_stop();
	HAL_Delay(400);
	return;
}
//col_detect();	// On Collision jump to internal error routine
//**************************************
void backward(int32_t mm)
{
	uint16_t range[5];  // FF, FL, FR, LL, RR
	int32_t nowl,nowr;
	int8_t left=40;		//verstehe nicht warum das nicht mit int16_t funktioniert
	int8_t right=40;
	int8_t start=40;
	distance_start_scan();
	HAL_Delay(100);
	distance_get_scan_values(range);
	distance_start_scan();
	nowl = motors_encoder_left();
	nowr = motors_encoder_right();
	while(motors_encoder_left()>=(nowl-(2.67*mm)))
	{
		col_detect(range);
		distance_get_scan_values(range);
		distance_start_scan();
		motors_set_both_pwm(-left,-right);
		if ((motors_encoder_left()-nowl)>(motors_encoder_right()-nowr))
		{
			right -=1;
			left=start;
		}
		else if ((motors_encoder_left()-nowl)<(motors_encoder_right()-nowr))
		{
			left -=1;
			right = start;
		}
		else
		{
			right = start;
			left = start;
		}
		motors_set_both_pwm(-left,-right);
	}
	motors_stop();
	HAL_Delay(400);
	return;
}

//**************************************
void turn90left()
{
	bno055_vector_t v,v0;	// v=aktueller Wert v0=Startwert
		int8_t x=0;
		uint16_t range[5];  // FF, FL, FR, LL, RR
		double u0=0;
		char buf[32];
		v0=bno055_getVectorEuler();
		double w0=v0.x;
		distance_start_scan();
		HAL_Delay(100);
		distance_get_scan_values(range);
		distance_start_scan();
		display_clear();
		sprintf(buf, ": %f",v0.x);
		display_gotoxy(0,5);
		display_println(buf);
		u0=v0.x-90.0;
		if(u0<0)
		{
			x=1;
			u0=u0+360;
			//HAL_Delay(10000);
		}

		while((w0>(u0+18.0)) || (x==1))
		{
			col_detect(range);
			distance_get_scan_values(range);
			distance_start_scan();
			motors_set_both_pwm(-50,50);
			v0=bno055_getVectorEuler();
			w0 = v0.x;
			if((x==1)&& (w0>=270))
			{
				x=0;
			}
		}

		motors_stop();
		HAL_Delay(400);
		return;
}
/*
	v0=bno055_getVectorEuler();
	double w0=v0.z;
	display_clear();^
	while(w0<=(v0.z+90))
	{
		motors_set_both_pwm(-40,40);
		v=bno055_getVectorEuler();
		w0 = v.z-v0.z;
	}*/
//**************************************
void turn90right()
{
	bno055_vector_t v,v0;	// v=aktueller Wert v0=Startwert
	int8_t x=0;
	uint16_t range[5];  // FF, FL, FR, LL, RR
	double u0=0;
	char buf[32];
	v0=bno055_getVectorEuler();
	double w0=v0.x;
	distance_start_scan();
	HAL_Delay(100);
	distance_get_scan_values(range);
	distance_start_scan();
	display_clear();
	sprintf(buf, ": %f",v0.x);
	display_gotoxy(0,5);
	display_println(buf);
	u0=v0.x+90.0;
	if(u0>360)
	{
		x=1;
		u0=u0-360;
		//HAL_Delay(50000);		//momentan eingefügt weil anscheind beim überlauf ein Fehler passiert sodass der nicht richtig dreht
	}
	while((w0<(u0-18.0)) || (x==1))
	{
		col_detect(range);
		distance_get_scan_values(range);
		distance_start_scan();
		motors_set_both_pwm(50,-50);
		v0=bno055_getVectorEuler();
		w0 = v0.x;
		if((x==1)&& (w0<=90))
		{
			x=0;
		}
	}

	motors_stop();
	HAL_Delay(400);
	return;
}

//**************************************
void turn180()
{
	bno055_vector_t v,v0;	// v=aktueller Wert v0=Startwert
	int8_t x=0;
	uint16_t range[5];  // FF, FL, FR, LL, RR
	double u0=0;
	char buf[32];
	v0=bno055_getVectorEuler();
	double w0=v0.x;
	distance_start_scan();
	HAL_Delay(100);
	distance_get_scan_values(range);
	distance_start_scan();
	display_clear();
	sprintf(buf, ": %f",v0.x);
	display_gotoxy(0,5);
	display_println(buf);
	u0=v0.x+180.0;
	if(u0>360)
	{
		x=1;
		u0=u0-360;

	}
	while((w0<(u0-18.0)) || (x==1))		//kleine Zahl dreht weiter
	{
		col_detect(range);
		distance_get_scan_values(range);
		distance_start_scan();
		motors_set_both_pwm(50,-50);
		v=bno055_getVectorEuler();
		w0 = v.x;
		if((x==1)&& (w0<=90))
		{
			x=0;
		}
	}

	motors_stop();
	HAL_Delay(400);
	return;
}

//**************************************
int8_t check_left()
{
	char buf[32];
	uint16_t range[5];  // FF, FL, FR, LL, RR
	uint8_t x;
	distance_start_scan();
	HAL_Delay(100);
	distance_get_scan_values(range);
	distance_start_scan();

	display_clear();
	sprintf(buf, "left: %i",range[3]);
	display_gotoxy(0,5);
	display_println(buf);

	if(range[3]>=200)
	{
		x=1;	//x=1(True also links frei)
	}
	else
	{
		x=0; 	//x=0(false also nicht frei)
	}
	return(x);
}

//**************************************
int8_t check_right()
{
	char buf[32];
	uint16_t range[5];  // FF, FL, FR, LL, RR
	uint8_t x;
	distance_start_scan();
	HAL_Delay(20);
	distance_get_scan_values(range);
	distance_start_scan();

	display_clear();
	sprintf(buf, "right: %i",range[4]);
	display_gotoxy(0,5);
	display_println(buf);

	if(range[4]>=200)
	{
		x=1;	//x=1(True also rechts frei)
	}
	else
	{
		x=0; 	//x=0(false also nicht frei)
	}
	return(x);
}

//**************************************
int8_t check_front()
{
	char buf[32];
	uint16_t range[5];  // FF, FL, FR, LL, RR
	uint8_t x;
	distance_start_scan();
	HAL_Delay(20);
	distance_get_scan_values(range);
	distance_start_scan();

	display_clear();
	sprintf(buf, "front: %i",range[0]);
	display_gotoxy(0,5);
	display_println(buf);

	if(range[0]>=200)
	{
		x=1;	//x=1(True also vorne frei)
	}
	else
	{
		x=0; 	//x=0(false also nicht frei)
	}
	return(x);
}

//**************************************
static void col_detect(uint16_t *range)
{
	// Get and evaluate distance values
	// ...
	char buf[32];

	uint16_t st = 40;
	if ((range[0]<=st)||(range[1]<=st)||(range[2]<=st)||(range[3]<=st)||(range[4]<=st)) // distances to small
	{
		// stop motors
		motors_stop();
		// show error somehow...
		display_clear();
		sprintf(buf, "Kollision erkannt");
		display_gotoxy(0,5);
		display_println(buf);
		while(1)
		{
			//...
		}
	}
}
