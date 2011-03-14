#include<stdio.h>
extern unsigned long long s;
#include"func.h"
int main(){

int n;
printf("Podaj swoj wiek w latach :\n");
scanf ("%i", &n);
s = przelicznik(n);
printf("Twoj wiek w sekundach wynosi: %Lx\n", s);

return 0;
}
