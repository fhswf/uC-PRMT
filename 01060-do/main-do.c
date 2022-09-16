/*
 *  01060-do  -  main-do.c
 *
 *  Beispiel zur do {} while (); Schleife
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

	i=20;
	do
	{
		printf("i=%i\n",i);
		i=i+1;	// Wenn diese Zeile fehlt, läuft Programm unendlich (Strg+C bricht ab)
	}
	while(i<10);

	return 0;
}
