/*
 *  01070-for  -  main-for.c
 *
 *  Beispiel zum Einsatz von for-Schleifen
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
	short int i;

	// Hochzaehlen von 0...9
	for (i=0;i<10;i++)
	{
		printf("%i\n",i);
	}

	// Hochzaehlen von 0...8 in 2-er Schritten
	for (i=0;i<10;i=i+2)
	{
		printf("%i\n",i);
	}

	// Runterzaehlen von 10...1
	for (i=10;i>0;i--)
	{
		printf("%i\n",i);
	}

	return 0;
}
