#include<stdio.h>
#include"func.h"

int main() {
int a,b,c;

printf("Wprowadź trzy liczby całkowite: ")
a = wczytaj();
b = wczytaj();
c = wczytaj();

suma(a,b,c);
iloczyn(a,b,c);
naj(a,b,c);
najm(a,b,c);


return 0;
}
