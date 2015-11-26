#include <stdio.h>
#include <stdlib.h>


int main(int argc , char** argv)
{
	int c,i;
	FILE * fichier = fopen(argv[1], "/r");
	do {
	c = fgetc(FILE * fichier);
	i++;
	} while (c != EOF);
	
	printf( "%d" , i);
	return 0;
	fclose(FILE * fichier);
}

