#include<stdio.h>
#include "lib.h"

int main()
{
    float tab[6];

    wczytaj_dane(tab);
    posortuj(tab);
    wypisz(tab);
    return 0;
}
