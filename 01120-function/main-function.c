/*
 *  01120-function  -  main-function.c
 *
 *  Beispiel zu Funktionsaufrufen
 *
 *  Beispielprogramme zur Vorlesung "Mikrocomputertechnik"
 *  FH Südwestfalen - Studiengang Mechatronik
 *
 *  Created on: 16.09.2019
 *      Author: Tobias Ellermeyer
 */

#include <stdio.h>

#define MEINWERT 6.0

float zylinder_oberflaeche(float h, float r)
	{
		float o;
		o=2.0*3.141*r*(r+h);
		return(o);
	}

int main()
{
	float x;

	x= zylinder_oberflaeche(MEINWERT,2.0);
	printf("Zylinderoberfläche %5.2f\n", x);

	// Auch moeglich:
	printf("Zylinderoberfläche %5.2f\n", zylinder_oberflaeche(5.0,2.0));
	return 0;
}
