#include <stdio.h>
#include <stdlib.h>
extern double sss, ssk;
int main(int argc, char *argv[])
{
    FILE *in_handle;
    char bufor[BUFSIZ], zz[2];
    unsigned int ui;
    double x, y;
    in_handle = fopen(argv[1], "r");
    while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
	sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
	if (ui != 0) {
	    printf("--> %d %.2f %.2f\n", ui, x, y);
	    oblicz(ui, x, y);
	}
	ui = 0;
    }
    printf
	("Podsumowanie sredniego spalania: %.2f, podsumowanie sredniego kosztu: %.2f \n",
	 sss, ssk);
    fclose(in_handle);
    return EXIT_SUCCESS;
}
