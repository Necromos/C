/*

*/

#include<stdio.h>
#include<stdlib.h>

#include"wyznacznik.h"


void wczytaj_macierz(int n, float macierz[n][n]) {
int x,y;

    for (x = 0; x < n; x = x + 1) {
	for (y = 0; y < n; y = y + 1) {
	    printf("  podaj element macierz[%i,%i]=", x, y);
	    scanf("%f", &macierz[x][y]);
	}
	printf("\n");
    }
}

int main()
{
    int n;
    printf("podaj wymaiar macierzy kwadratowej: ");
    scanf("%i", &n);
    printf("\n");
    float macierz[n][n];

    wczytaj_macierz(n,macierz);

    printf("%f", wyznacznik(n, macierz));
    printf("\n");
    return EXIT_SUCCESS;
}
