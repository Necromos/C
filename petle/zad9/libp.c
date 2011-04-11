#include<stdio.h>
#include<stdlib.h>

double sss, ssk;

void oblicz(unsigned li, double k, double c)
{
    double srednie_spalanie = 0, sredni_koszt = 0;
    srednie_spalanie = (li / k) * 100;
    sredni_koszt = srednie_spalanie * c;
    printf("Srednie spalanie wynosi: %.2f Sredni koszt wynosi: %.2f \n",
	   srednie_spalanie, sredni_koszt);
    sss += srednie_spalanie;
    ssk += sredni_koszt;

}
