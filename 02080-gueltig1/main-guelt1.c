/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     02080-gueltig1
 * Datei:       main-guelt1.c
 *
 * Erstellt:    18.9.2019
 * Autor:       Tobias Ellermeyer
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	int16_t a=2,b=10;

	printf("(1) a=%i  b=%i\n",a,b);
	{
		int16_t a;
		a=3;
		b=11;
		printf("(2) a=%i  b=%i\n",a,b);
	}
	{
		printf("(2b) a=%i\n",a);
	}
	printf("(3) a=%i  b=%i\n",a,b);
	return 0;
}

