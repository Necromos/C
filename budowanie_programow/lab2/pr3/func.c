#include<stdio.h>

unsigned long long przelicznik (int n) {
unsigned long long s;
s = 365 * n * 24 * 60 * 60;
printf("%Lo", s);
return s; 
}
