#include<stdio.h>

/* funkjce do lib.c */

void wczytaj_dane(float tab[6])
{
    int i;
    printf("podaj szesc liczb rzeczywistych\n");
    for (i = 0; i < 6; i++) {
        printf("podaj tab[%i]=", i);
        scanf("%f", &tab[i]);
    }
}

void posortuj(float tab[6])
{
    int i, j;
    float pom;

    for (i = 0; i < 6; i++) {
        j = i;
        while (j > 0 && tab[j] < tab[j - 1]) {
            pom = tab[j];
            tab[j] = tab[j - 1];
            tab[j - 1] = pom;
            j--;
        }
    }
}

void wypisz(float tab[6])
{
    printf(" max = %.2f \n min = %.2f \n", tab[5], tab[0]);
}

