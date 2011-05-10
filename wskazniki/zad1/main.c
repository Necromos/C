#include <stdio.h>

/* oblicz kwadrat liczby n */
void kwadrat(int k, int *n){
	*n = k * k;
}

void wczytaj_liczbe(int *n){
    printf("Wpisz liczbę naturalną: ");
	scanf("%d", n);
}

int main()
{
    int liczba, wynik;
    wczytaj_liczbe(&liczba);
    kwadrat(liczba, &wynik);
    printf("\nPodano liczbe: %d, jej kwadrat: %d\n", liczba, wynik);
    return 0;
}
