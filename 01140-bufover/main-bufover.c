/*
 *  01140-bufover  -  main-bufover.c
 *
 *  Demonstration Ueberschreiben von Variablen bei Buffer Overflow
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
	   char buf[6];
	   int  i;
	   i = 10;
	   printf("Text fuer buf[6]=");
	   fflush(stdout); // Nur fuer Eclipse-Console
	   //scanf("%5s",buf);
	   fgets(buf,5,stdin);
	   printf("buf=%s\n",buf);
	   printf("i=%i\n",i);

	   int x[10];

	   i=11;
	   x[i] = 20;		// i liegt hier außerhalb des erlaubten
	   					// Bereichs 0…9

	   x[12]=2;

	   return 0;
}
