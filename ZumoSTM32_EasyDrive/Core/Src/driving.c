/*
  ___          _____     __  __
   _/    _  _ (_  | |\/|  _)  _)
  /__|_||||(_)__) | |  | __) /__

 Fachhochschule Suedwestfalen
 Mechatronik/Mikrocomputer
 Prof. Dr.-Ing. Tobias Ellermeyer

 file: driving.c
 path:  src

 created:    01.05.2023
 author:     Tobias Ellermeyer
*/

#include "zumo/simple.h"


void driving()
{
	// Test der Routinen aus simple.c
	uint16_t feld=330;
	while(1)
	{
		//turn90right();
		//HAL_Delay(2000);
		//forward(feld);
		//check_front();
		/*
		forward(feld);
		turn90right();
		forward(feld);
		turn90left();
		forward(feld);
		turn180();
		//backward(feld);
		// ... usw... ggf. auch Parameter MOVE_FAIL MOVE OK testen
		HAL_Delay(1000);
		//HAL_Delay(1000);
		//backward(feld);*/

		if(check_left()==1)
		{

			turn90left();
			forward(300);

		}
		else if(check_front()==1)
		{

			forward(feld);

		}
		else if(check_right()==1)
		{

			turn90right();
			forward(300);

		}
		else
		{

			turn180();

		}
	}
}
