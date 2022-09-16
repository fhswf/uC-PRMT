/*
 *  01090-else  -  main-elseif.c
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

	// Verschachtelte if-Abfrage
	printf("\n\nBeispiel 1: Verschachtelte if/else\n");

	if (x>=10.0)
	{
		printf("x ist größer oder gleich 10\n");
	}
	else
	{
		if (x>0.0)
		{
			printf("x ist groesser als 0.0 aber kleiner als 10.0\n");
		}
		else
		{
			printf("x ist kleiner oder gleich 0.0\n");
		}
	}

	// Einzel-Abfragen
	printf("\nBeispiel 2: Einzelne If-Abfragen fuer Bereiche\n");

	if (x==10.0)
	{
		printf("x ist gleich 10\n");
	}
	printf("x=%lf\n",x);
	if ( (x>0.0) && (x<10.0) )
	{
		printf("x ist groesser als 0.0 aber kleiner als 10.0\n");
	}
	if (x<=0.0)
	{
		printf("x ist kleiner oder gleich 0.0\n");
	}


	printf("\nUnd hier so oder so gehts weiter x=%lf...\n",x);
	return 0;
}
