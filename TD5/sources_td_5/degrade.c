#include <stdio.h>



int main()
{
	printf( "P3\n%d %d\n%d\n" , 256, 256, 256);
	int i;
	int j;
	
	for (i = 0; i < 256 ; i++)
	{
		for (j = 0; j < 256; j++)
		{
			
			printf( "%d\n0\n%d\n" , i , j );
		}
		
	}
	
	
	
	
	
	
	return 0;
}

