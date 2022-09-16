/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     02060-swich
 * Datei:       main-switch.c
 *
 * Beispiel fuer switch-Anweisung
 *
 * Erstellt:    17.09.2019
 * Autor:       Tobias Ellermeyer
 */

#include <stdio.h>

int main()
{
	int i;

	for (i=0;i<5;i++)
	{
		printf("---i=%i---\n",i);
		switch(i)
		{
		case 0: printf("Marke 0\n");
				// no break
		case 1: printf("Marke 1\n");
				// no break
		case 2: printf("Marke 2\n");
				break;
		case 3: printf("Marke 3\n");
				break;
		default: printf("Default\n");
				break;
		}
	}
	return 0;
}


