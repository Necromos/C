/*
	program testujący funkcję wyznacznik
*/

#include<stdio.h>
#include<stdlib.h>

#include"wyznacznik.h"


void wczytaj_macierz(float macierz[][], int n) {
int x,y;

    for (x = 0; x < n; x = x + 1) {
	for (y = 0; y < n; y = y + 1) {
	    printf("  podaj element macierz[%i,%i]=", x, y);
	    scanf("%f", &macierz[x][y]);
	}
	printf("\n");
    }

return;
}

int main()
{
    int n;
    printf("podaj wymaiar macierzy kwadratowej: ");
    scanf("%i", &n);
    printf("\n");
    float macierz[n][n];

    wczytaj_macierz(macierz, n);

    printf("%f", wyznacznik(n, macierz));
    printf("\n");
    return EXIT_SUCCESS;
}
