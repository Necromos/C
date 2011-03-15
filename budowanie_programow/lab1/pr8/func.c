#include<stdio.h>

int wczytaj (void) {
int a;
scanf("%i", &a);
return a;
}

int suma (int a, int b, int c) {
int s;
return s=a+b+c;
}

int iloczyn (int a, int b, int c) {
int i;
return i=a*b*c;
}

int naj(int a, int b, int c) {
int najm;
if (a<b && b<c)
najm = a;
if (c<b && b<a)
najm = c;
if (b<a && a<c)
najm = b;
return najm;
}

int najw(int a, int b, int c) {
int najwi;
if (a>b &&


}
