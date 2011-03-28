#include<stdio.h>

int pobierz_calkowita( ) {
	return 0;	
}

double pobierz_rzeczywista( void ) {
	double x;
	do {
/*
Warunek sprawdzajacy ujemnosc liczby po przebiegu petli.
Wersja ulepszona, nie wyrzucajac bledu ale wymagajaca wpisania liczby 
dodatniej.
*/
	if (x<=0)
		printf("To chyba zart ze podajesz liczbe ujemna do pierwiastkowania :P");
	printf("Podaj liczbe rzeczywista ");
	scanf("%lf", &x);
	}
	while (x<=0);
	return x;
}
