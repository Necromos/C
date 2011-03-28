#include<stdio.h>

main () {
int i, j, z, x, pom,  a[1000], b[1000], c[1001];

printf("Podaj długość pierwszej liczby: ");
scanf("%i", &z);
printf("Podaj długość drugiej liczby: ");
scanf("%i", &x);
pom=0;
for (i=z-1; i>=0; i--)
 {
  scanf("%1i", &a[i]);
 }
for (i=x-1; i>=0; i--)
 {
  scanf("%1i", &b[i]);
 }
if (z>=x)
 {
  for (i=x; i<z; i++)
   {
     b[i]=0;
   }
for (i=0; i<=z; i++)
 {
  c[i]=a[i]+b[i]+pom;
  if (c[i]>9)
  {
   pom=c[i]/10;
   c[i]=c[i]%10;
  }
  else pom=0;
 }
for (i=z-1; i>=0; i--)
 {
  printf("%i", c[i]);
 }


 }
if (z<x)
 {
  for (i=z; i<x; i++)
   {
    a[i]=0;
   }
 
for (i=0; i<=x; i++)
 {
  c[i]=a[i]+b[i]+pom;
  if (c[i]>9)
  {
   pom=c[i]/10;
   c[i]=c[i]%10;
  }
  else pom=0;
 }

for (i=x-1; i>=0; i--)
 {
  printf("%i", c[i]);
 }
}
}
