#include "graphics.h"
#define N 9
// fin des instructions de préprocesseur

struct Case
{
	POINT supgauche;
	POINT infdroite;
	BOOL murdroite;
	BOOL murbas;
	int joueur;
};
typedef struct Case CASE;
// cette structure servira à stocker chaque case du plateau

void dessiner_case( CASE c )
{
	draw_fill_rectangle( c.supgauche , c.infdroite , white );
	
	if( c.joueur != 0)
	{	
		if( c.joueur == 1 )
		{
			c.supgauche.x += 20;
			c.supgauche.y -= 20;
			draw_fill_circle( c.supgauche , 20 , red );
		}
		else
		{
			c.supgauche.x += 5;
			c.supgauche.y -= 5;
			draw_fill_circle( c.supgauche , 20 , green );
		}
	}	
}
// cette fonction affiche dans la fenêtre graphique une case avec un pion si un joueur est présent

CASE initialise_case ( CASE c , int i , int j )
{
	c.supgauche.x = i * 40;
	c.supgauche.y = j * 40;
	c.infdroite.x = (i-1)*40;
	c.infdroite.y = (j+1)*40;
	c.murdroite = 0;
	c.murbas = 0;
	c.joueur = 0;
	return c;
}
// cette fonction initialise les valeurs d'une case



int main()
{
init_graphics(900,600);
CASE c[N][N];
int i,j;

for (i = 1; i < N+1 ; i++)
{
	for (j = 0; j < N; j++)
	{
		c[i][j] = initialise_case( c[i][j] , i , j);
		dessiner_case(c[i][j]);
	}
	
}
wait_escape();
exit(0);
}
