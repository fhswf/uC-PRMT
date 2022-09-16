/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Datei: max.c
 * Pfad:  /01130-proto2/max.c
 *
 * Erstellt: 21.10.2020
 *      von: Tobias Ellermeyer
 *
 */
#include <stdio.h>

#include "max.h"

void blah()
{
	int a;
	a=max(5,3);
}

short max(short x, short y)
{
	int m;

	if (x>y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	printf("Fertig in max\n");
	return(m);
}

