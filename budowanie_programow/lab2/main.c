/*
	program testujący funkcję wyznacznik
*/

#include<stdio.h>
#include<stdlib.h>

#include"wyznacznik.h"



float wczytaj_macierz() {	
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
