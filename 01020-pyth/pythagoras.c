/*
 *  01020-pyth  -  pythagoras.c
 *
 *  Berechnung des Satz von Pythagoras
 *
 *  Beispielprogramme zur Vorlesung "Mikrocomputertechnik"
 *  FH Südwestfalen - Studiengang Mechatronik
 *
 *  Created on: 16.09.2019
 *      Author: Tobias Ellermeyer
 */

#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;

	a=3.5;
	b=4.0;
	// sqrt => Square Root => Quadratwurzel
	// pow  => Power of => Potenz

	c= sqrt(a*a+pow(b,2));
	printf("Pythagoras\n");
	printf("a= %lf\n",a);
	printf("b= %lf\nc= %lf\n",b,c);
	return 0;
}
