#include <stdio.h>
#include <stdlib.h>
#include "math.h"

// renvoie la somme des diviseurs de n
int somme_des_diviseurs(int n)
{
	int i,divn;
	divn = 0;
	for (i = 1; i < (n/2); i++)
	{
		if ( n%i == 0)
		{
			divn += i;
		}
		
	}
	return divn;
}

int main()
{
	int n,m,i;
	n = scanf("%d" , &i );
	m = scanf("%d" , &i );
	
	if ( n == somme_des_diviseurs(m) && m == somme_des_diviseurs(n))
	{
		printf( "Les nombres %d et %d sont amis" , n , m);
	}
	else printf("Les nombres %d et %d ne sont pas amis" , n , m);

wait_escape();
exit(0);
}
