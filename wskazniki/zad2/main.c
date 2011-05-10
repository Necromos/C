#include <stdio.h>


int main() {
	int t[4] = {2, 8, 1, 3};
	int *a[4];
	int i;	
	for (i = 0; i < 4; i++){
	printf("%d", t[i]);
	}
	printf("\n");
	// wyniki
	for (i=0; i< 4; i++) {
		printf("%d ", *a[i]);
	}
	printf("\n");

	return 0;
}
