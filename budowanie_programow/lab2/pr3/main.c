#include <stdio.h>
#include "func.h"

int main()
{
    int n;
/*
Wczytanie wieku.
*/
    n = wczytaj();

/*
Wyswietlenie wyniku w sekundach
*/
    printf("\nTwoj wiek w sekundach wynosi: %Lo\n", przelicznik(n));

    return 0;
}
