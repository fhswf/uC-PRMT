/*
  ___          _____     __  __
   _/    _  _ (_  | |\/|  _)  _)
  /__|_||||(_)__) | |  | __) /__

 Fachhochschule Suedwestfalen
 Mechatronik/Mikrocomputer
 Prof. Dr.-Ing. Tobias Ellermeyer

 File: simple.h
 Path:  zumolib/inc/zumo

 Created:    01.05.2023
 Author:     Tobias Ellermeyer
*/

#ifndef ZUMOLIB_INC_ZUMO_SIMPLE_H_
#define ZUMOLIB_INC_ZUMO_SIMPLE_H_

#include "main.h"

void forward(int32_t mm);
void backward(int32_t mm);
void turn90left();
void turn90right();
void turn180();
int8_t check_left();
int8_t check_right();
int8_t check_front();


#endif /* ZUMOLIB_INC_ZUMO_SIMPLE_H_ */
