/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     03040-zeigchar
 * Datei:       main-zeigchar.c
 *
 * Erstellt:    02.10.2019
 * Autor:       Tobias Ellermeyer
 */

#include <stdio.h>


int main()
{
	char text[10]="Hallo";
	char *textz;

	textz=text;			// Den Zeiger textz auf die Anfangsadresse
	                    // des Textes zeigen lassen
	while( (*textz) != '\0')	// Das String-Ende wird durch \0 gekennzeichnet (Nullbyte)
	{
		printf("textz=0x%p  Zeichen %c ASCII %i\n",
		   (void*)textz, *textz, *textz);
		textz++;		// Den Zeiger um eins erhöhen
	}
}
