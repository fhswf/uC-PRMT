/*
 *  01040-ifdef  -  main-ifdef.c
 *
 *  Beispiel zum Einsatz von #ifdef
 *
 *  Beispielprogramme zur Vorlesung "Mikrocomputertechnik"
 *  FH Südwestfalen - Studiengang Mechatronik
 *
 *  Created on: 16.09.2019
 *      Author: Tobias Ellermeyer
 */

#include <stdio.h>

#define PI 3.1415927

#define __ENGLISH__

int main()
{
	double u,r;
	r = 3.0;
	u = 2.0*PI*r;
#ifdef __ENGLISH__
	printf("Hello World\n");
#else
	printf("Hallo Welt\n");
#endif
	printf("Fertig\n");
	return 0;
}
