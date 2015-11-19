struct element{
  POINT p;
  struct element *suiv;
};
typedef struct element *Liste;


// ############################
// 2. Fonctions listes chainees
// ############################


Liste ajoutDebut(Liste l, POINT p);

Liste supprimeDebut(Liste l);


void dessineListeRec(Liste l);
  


void dessineListe(Liste l);
