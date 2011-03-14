#include <stdio.h>

/*
Funkcja wczytujaca wiek
*/
int wczytaj(void)
{
    int n;
    printf("Podaj wiek w latach: ");
    scanf("%i", &n);
    return n;
}

/*
Funkcja obliczajaca sekundy
*/
unsigned long long przelicznik(int n)
{
    int i;
    unsigned long long s;
    s = 365 * n * 24 * 60 * 60;
    for (i = 1; i <= n; i++)
	if (i % 4 == 0)
	    s = s + 24 * 60 * 60;
    return s;
}
