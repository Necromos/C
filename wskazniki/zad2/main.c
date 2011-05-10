#include <stdio.h>


int main()
{
    int t[4] = { 2, 8, 1, 3 };
    int *a[4];
    int i;

    for (i = 0; i < 4; i++) {
	printf("%d ", t[i]);
    }
    printf("\n");


    for (i = 0; i < 4; i++) {
	a[i] = &t[i];
	// a[i] = t + i t jest startem wskaznika w tablicy a i zwieksza adres
    }

    for (i = 0; i < 4; i++) {
	printf("%d ", *a[i]);
    }
    printf("\n");

    return 0;
}
