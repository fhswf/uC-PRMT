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

// Prototyp
short max(short,short);

// Hauptroutine
int main()
{
	int a,b;
	a=5;
	b=7;
	printf("max(%i,%i)=%i\n",a,b,max(a,b));
	return 0;
}

// Die folgende Zeile aktiviert den etwas kompakteren Code
//#define __CRYPTIC__

short max(short x, short y)
{
#ifndef __CRYPTIC__
	int m;

	if (x>y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	return(m);
#else
	// Sehr kompakt, aber hier muss man schon fit in C sein ;-)
	return (x>y)?x:y;
#endif
}
