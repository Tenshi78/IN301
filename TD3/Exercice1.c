#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <ctype.h>


int main( int argc, char** argv){
int i; double s = 0;

for (i = 0; i < strlen(argv); i++)
{
	
}

for(i=1; i<argc; i++)
{
	s += atof(argv[i]);
}
printf("%f\n", s);
return 0;
}
