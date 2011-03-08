#include<stdio.h>
#include<math.h>

#define dol_x -0.9
#define gora_x 8
#define krok_x 0.1


float funkcja (float x)
{
 float z;
 z=x*x*x/27-2*x*x/9+x/3+2;
 return z;
}
// miejsce na wpisanie definicji funkcji


main () {
  float x, dol, gora, krok;
  printf("\nTABLICOWANIE FUNKCJI:\n");
  printf("\n Argument |   Wartosc   ");
  printf("\n----------+-------------");
  for (x=dol_x; x<=gora_x; x=x+krok_x)
    printf("\n %8.4f | %10.4f ", x, funkcja(x));
  printf("\n\n");
}

