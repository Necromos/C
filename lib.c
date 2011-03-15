#include<stdio.h>
/* zbior funkcji czesto uzywanych */

/* Funkcja pobierajaca wartosc calkowita */
int pobierz_calkowita(char *prompt) {
	int n;
	printf(prompt);
	scanf("%i", &n);
	return n;
}

/* Funkcja pobierajaca wartosc rzeczywista */
float pobierz_rzeczywista(char *prompt) {
	float k;
	printf(prompt);
	scanf("%f", &k);
	return k;
}
