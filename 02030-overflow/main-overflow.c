/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     02030-overflow
 * Datei:       main-overflow.c
 *
 *  Demonstration Ueberlauf Wertebereich
 *
 * Erstellt:    17.09.2019
 * Autor:       Tobias Ellermeyer
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t t,r;
	int32_t a,b,c,w;
    t = 126;
    t = t +2;
    printf("(1) t=%i\n",t);

	r=-126;
	r=r-3;
	printf("(2) r=%i\n",r);

	r=-129;		// Warning bei Konstanten

	a=1000000;
	b=2000000;
	c=b;
	w=a*b/c;
	printf("(3) w=%i\n",w);
	w=a*b;
	printf("(3b) ab=%i /c=%i\n",w,w/c);
	a=1000000;
	b=2000000;
	w=a*b/b;
	printf("(4) w=%i\n",w);

	uint8_t i;

	for (i=10;i>=0;i--)
	{
		if (i==0) break;	// Rettungsanker
	}


}


