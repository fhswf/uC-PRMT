/*
 *  01090-else  -  main-else.c
 *
 *  Beispiel zum Einsatz if/else-Abfragen
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

	// Eingabe des Wertes
	printf("Eingabe x:");
	fflush(stdout);  // Nur noetig, falls in Eclipse-Command-Window
	                 // Ausgabebuffer leeren (sonst erscheint Text "Eingabe x:" nicht)
	scanf("%lf",&x); // Eingabe x (folgt spaeter in Vorlesung ...)

	if (x>0.0)
	{
	   printf("x ist größer als 0\n");
	}
	else
	{
	   printf("x ist kleiner oder gleich 0\n");
	}
	printf("Und hier so oder so gehts weiter...\n");
	return 0;
}
