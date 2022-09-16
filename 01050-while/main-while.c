/*
 *  01050-while  -  main-while.c
 *
 *  Beispiel zur while() {} Schleife
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

	i=0;
	while(i<10)
	{
		printf("Hallo");
		i=i+1;	// Wenn diese Zeile fehlt, läuft Programm unendlich (Strg+C bricht ab)
	}


	printf("i=%i\n",i);
	return 0;
}
