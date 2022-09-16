/*
 *  01080-if  -  main-if.c
 *
 *  Beispiel zum Einsatz if-Abfragen
 *
 *  Beispielprogramme zur Vorlesung "Mikrocomputertechnik"
 *  FH Südwestfalen - Studiengang Mechatronik
 *
 *  Created on: 16.09.2019
 *      Author: Tobias Ellermeyer
 */

#include <stdio.h>

int main()
{
	double x;

	x=-5.0;

	if (x<0.0)
	{
		x=-x;
	}
	printf("abs(x)=%g\n",x);
	return 0;
}
