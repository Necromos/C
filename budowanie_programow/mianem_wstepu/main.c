/*
	program testujący funkcję wyznacznik
*/

#include<stdio.h>
#include<stdlib.h>

#include"wyznacznik.h"

int n,x,y;
float * wsk;

void wczytaj_macierz() {	
    int n, x, y;
    printf("podaj wymaiar macierzy kwadratowej: ");
    scanf("%i", &n);
    printf("\n");
    float macierz[n][n];

/* wczytywanie macierzy */

    for (x = 0; x < n; x = x + 1) {
	for (y = 0; y < n; y = y + 1) {
	    printf("  podaj element macierz[%i,%i]=", x, y);
	    scanf("%f", &macierz[x][y]);
	}
	printf("\n");
    }
*wsk = macierz;
return 0;
}

int main()
{

    wczytaj_macierz();

/* wypisz wyznacznik */

    printf("%f", wyznacznik(n, macierz));
    printf("\n");
    return EXIT_SUCCESS;
}
