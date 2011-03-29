#include<stdio.h>


void wyswietl_szachownice(void)
{
    int i, j;
    for (i = 1; i <= 8; i++) {
	if (i % 2 == 1) {
	    for (j = 1; j <= 8; j++) {
		if (j == 8)
		    printf("*");
		else
		    printf("* ");
	    }
	    printf("\n");
	} else {
	    for (j = 1; j <= 8; j++) {
		printf(" *");
	    }
	    printf("\n");
	}
    }
}
