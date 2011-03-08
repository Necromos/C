#include<stdio.h>

float wyznacznik(int n, float macierz[n][n])
{
    int i, j, k, znak;
    float det[n][n], suma;
    suma = 0;
    znak = 1;
    if (n == 1)
	return macierz[0][0];
    else if (n > 1) {

/* przygotowywanie macierzy (det) z wycietym ostatnim wierszem i i-ta kolumna*/

	for (i = n - 1; i >= 0; i = i - 1) {
	    for (j = 0; j < n - 1; j = j + 1) {
		for (k = 0; k < i; k = k + 1) {
		    det[j][k] = macierz[j][k];
		}
		for (k = i; k < n - 1; k = k + 1) {
		    det[j][k] = macierz[j][k + 1];
		}
	    }

/* dodawanie do sumy kolejnych skladnikow (wyznacznikow macierzy det) */

	    suma =
		suma + znak * macierz[n - 1][i] * wyznacznik(n - 1, det);
	    znak = -znak;
	}
    }
    return suma;
}
