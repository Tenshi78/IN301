#include <stdio.h>
#include <stdlib.h>
#include "math.h"


void permutation(int* a , int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
		
}
int main()
{	
	int a,b;
	a = 165;
	b = 89626;
	permutation(&a,&b);
	printf("a = %d et b = %d \n", a , b);










exit(0);
}
