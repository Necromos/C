#include<stdio.h>
#include "lib.h"

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;		/* lower left */
    struct point ur;		/* upper right */
};

int main()
{
    struct rect r1, r2;

    scanrect("Podaj wsp rct1:", &r1);

    scanrect("Podaj wsp rct2:", &r2);

    printf("%i \n", rectinrect(r1, r2));

    return 0;
};
