#include<stdio.h>

void wczytaj_macierz(int n, float macierz[n][n])
{
    int x, y;

    for (x = 0; x < n; x = x + 1) {
	for (y = 0; y < n; y = y + 1) {
	    printf("  podaj element macierz[%i,%i]=", x, y);
	    scanf("%f", &macierz[x][y]);
	}
	printf("\n");
    }
}
