/*
 *  01110-equal  -  main-equal.c
 *
 *  Typischer Fehler bei if equal Abfragen
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
	int i;

	i=3;

//	if (5==i)
	if (i==5)
	{
		printf("i ist 5\n");
	}
	printf("Wert von i: %i\n",i);
	return 0;
}
