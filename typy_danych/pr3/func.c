#include <stdio.h>

int pobierz_calkowita(char *prompt) {
	int n;
	printf (prompt);
	scanf("%i",&n);
	return n;
}

/*Funkcja wczytujaca wiek*/
int wczytaj(void)
{
    int n;
    printf("Podaj wiek w latach: ");
    scanf("%i", &n);
    return n;
}

/*Funkcja obliczajaca sekundy*/
unsigned long long przelicznik(int n)
{
    int i;
    unsigned long long sekundy_w_roku, sekundy_w_dzien;
    unsigned long long total = 0;
    sekundy_w_roku = 365 * 24 * 60 * 60;
    sekundy_w_dzien = 24 * 60 * 60;
    for (i = 2011; i > 2011- n; i--)
	if (i%4==0 && i%100!=0 || i%400)
	    total += sekundy_w_roku + sekundy_w_dzien;
    	else
	    total += sekundy_w_roku;
    return total;
}
