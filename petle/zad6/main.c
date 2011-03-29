#include<stdio.h>
#include "lib.h"

int main()
{
    float tab[6];

    wczytaj_tabele(tab);
    posortuj_tabele(tab);
    wypisz_wyniki(tab);
    return 0;
}
