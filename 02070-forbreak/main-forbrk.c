/*    ______ __    _____      ______         _____
 *   / __/ // /___/ __/ | /| / / __/_____ __/ ___/
 *  / _// _  /___/\ \ | |/ |/ / _//___/ // / /__
 * /_/ /_//_/   /___/ |__/|__/_/      \_,_/\___/
 *
 * Fachhochschule Südwestfalen
 * Mechatronik/Mikrocomputer
 * Prof. Dr.-Ing. Tobias Ellermeyer
 *
 * Projekt:     02070-forbreak
 * Datei:       main-forbrk.c
 *
 * Beispiel fuer break in for-Anweisung
 *
 * Erstellt:    17.09.2019
 * Autor:       Tobias Ellermeyer
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
int16_t tabelle[]={5,3,8,7,11,32,12,43,21};
int16_t i, wert;
int16_t N;  // Anzahl Werte in Tabelle


// Anzahl Werte in Tabelle
N = sizeof(tabelle)/sizeof(int16_t);

wert = 321;   // Suche, ob Wert 32 in Array vorkommt

for(i=0;i<N;i++) // In Tabelle nach wert suchen
{
   if (tabelle[i]==wert) break;
}
if (i<N) // Wenn i<N, dann wurde vorher abgebrochen, d.h. gefunden
{
   printf("Wert an Position %i gefunden!\n",i);
}
else
{
   printf("Wert NICHT gefunden!\n");
}

return 0;

}
