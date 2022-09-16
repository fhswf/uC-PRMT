/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     02090-gueltig2
 * Datei:       main-guelt2.c
 *
 * Erstellt:    18.09.2019
 * Autor:       Tobias Ellermeyer
 */
#include <stdio.h>
#include <stdint.h>


// HINWEIS: Je nach dem, was getestet werden soll,
// Variablendeklarationen entsprechend auskommentieren...

int16_t a=2;

void function1()
{
	//int16_t a=0;
	printf("(F) a=%i\n",a);
	a=a+1;
}

int main()
{
    //uint16_t a=20;
	printf("(1) a=%i\n",a);
	function1();
	printf("(2) a=%i\n",a);
	a=a+2;
	function1();
	printf("(3) a=%i\n",a);
	return 0;

}


