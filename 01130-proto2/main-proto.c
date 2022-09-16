/*
 *  01130-proto  -  main-proto.c
 *
 *  Beispiel zu Funktions-Prototypen
 *
 *  Beispielprogramme zur Vorlesung "Mikrocomputertechnik"
 *  FH Südwestfalen - Studiengang Mechatronik
 *
 *  Created on: 16.09.2019
 *      Author: Tobias Ellermeyer
 */

#include <stdio.h>

#include "max.h"

// Hauptroutine
int main()
{
	int a,b;
	a=5;
	b=7;
	printf("Maximum(%i,%i)=%i\n",a,b,max(a,b));
	return 0;
}


