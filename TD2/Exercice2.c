#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "time.h"

int alea(int n)
{
	int a;
	a = rand();
	return a%n;
}
struct Tableau
{
	int Taille;
	int tab[100];
};
typedef struct Tableau Tableau;

Tableau init(int a,Tableau Yolo )
{
	int i;
	Yolo.Taille = a;
	for (i = 0; i < Yolo.Taille; i++)
	{
		Yolo.tab[i] = alea(20);
	}
	return Yolo;
		
}

void affiche(Tableau Yolo)
{
	int i;
	for (i = 0; i < Yolo.Taille ; i++)
	{
		printf( "La taille de l'élement %d est %d \n" , i , Yolo.tab[i]);
	}
	
}

int minimum( Tableau Yolo )
{
	int min = Yolo.tab[1];
	int i;
	
	for (i = 1; i < Yolo.Taille; i++)
	{	
		if( Yolo.tab[i] < Yolo.tab[i-1] ) min = Yolo.tab[i];
	}
	
	
	return min;
}

Tableau decalage( Tableau Yolo )
{
	
	
	int i;
	Yolo.Taille++;
	for (i = Yolo.Taille; i > 0 ; i--)
	{
		Yolo.tab[i] = Yolo.tab[i-1];
	}
	Yolo.tab[0] = 0;
	
	return Yolo;
	
}
Tableau Tri( Tableau Yolo )
{
	int i,j,Temp;
	for (i = 0; i < Yolo.Taille-1 ; i++)
	{
		for (j = i; j < (Yolo.Taille) ; j++)
		{
			if( Yolo.tab[i] > Yolo.tab[j])
			{
				Temp = Yolo.tab[i];
				Yolo.tab[i] = Yolo.tab[j];
				Yolo.tab[j] = Temp;
				
			}
			
		}
		
	}
	return Yolo;
}
Tableau insertion(int a, Tableau Yolo)
{
	Yolo = decalage(Yolo);
	int i = 1;
	while( a > Yolo.tab[i] )
	{
		Yolo.tab[i-1] = Yolo.tab[i];
		i++;
	}
	Yolo.tab[i-1] = a;
	return Yolo;
}
Tableau inverse(Tableau Yolo) //En cours de programmation
{
	Yolo = decalage(Yolo);
	int i;
	for (i = 0; i < Yolo.Taille ; i++)
	{
		Yolo.tab[i] = Yolo.tab[((Yolo.Taille-1)-i)];
		
	}
	return Yolo;
}

int main()
{	
	int a = 10;
	srand(time(NULL));
	Tableau Swag;
	Swag = init(a,Swag);
	affiche(Swag);
	int b; 
	b = minimum(Swag);
	printf( "Le minimum de Swag est %d\n",b);
	Swag = Tri(Swag);
	affiche(Swag);
	printf("\n");
	Swag = inverse(Swag);
	affiche(Swag);

exit(0);
}
