#include <stdio.h>

int main()
{
    int t[4] = { 2, 1, 8, 3 };
    int a[4] = { 0, 1, 2, 3 };
    int i, j;

    for (i = 0; i < 4; i++)
	printf("%d ", t[i]);
    printf("\n");

    for (i = 0; i < 4; i++) {
	for (j = i + 1; j < 4; j++) {
	    if (t[i] > t[j]) {
		int tmp;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	    }
	}
    }
    for (i = 0; i < 4; i++)
	printf("%d ", a[i]);
    printf("\n");


    for (i = 0; i < 4; i++)
	printf("%d ", t[a[i]]);
    printf("\n");

    return 0;
}
