#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *in_handle;
    char bufor[BUFSIZ],zz[2];
    unsigned int ui;
    double x, y;
    in_handle = fopen("dane.txt", "r");
    while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
	if(sscanf(bufor,"%c", &zz)=='--'){
    	
		}
	else
	{
		sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
		printf("--> %d %.2f %.2f\n", ui, x, y);
   	}
    }
    fclose(in_handle);
    return EXIT_SUCCESS;
}
