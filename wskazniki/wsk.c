#include <stdio.h>

/* oblicz kwadrat liczby n */
void kwadrat(int k, int *n){
	*n = k * k;
}

void wczytaj_liczbe(int *n){
    printf("Wpisz liczbę naturalną: ");
}

int main()
{
    int liczba=3, wynik;
    wczytaj_liczbe(&liczba);
    kwadrat(liczba, &wynik);
    printf("\nPodano liczbe: %d, jej kwadrat: %d\n", liczba, wynik);
    return 0;
}
