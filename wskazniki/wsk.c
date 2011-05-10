#include <stdio.h>

/* oblicz kwadrat liczby n */
void kwadrat(int m, int *n){

}

void wczytaj_liczbe(int *n){
    printf("Wpisz liczbę naturalną: ");
}

int main()
{
    int liczba=2, wynik=4;
    wczytaj_liczbe(&liczba);
    kwadrat(liczba, &wynik);
    printf("\nPodano liczbe: %d, jej kwadrat: %d\n", liczba, wynik);
    return 0;
}
