/*

*/

#include<stdio.h>
#include<stdlib.h>

#include"defzbiorowe.h"

int main()
{
    int n;
    printf("podaj wymaiar macierzy kwadratowej: ");
    scanf("%i", &n);
    printf("\n");
    float macierz[n][n];

    wczytaj_macierz(n, macierz);

    printf("%f", wyznacznik(n, macierz));
    printf("\n");
    return EXIT_SUCCESS;
}
