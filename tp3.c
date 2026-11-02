#include <stdio.h>
#include "tp3.h"

int main()
{
int tabNotes[30][3];
int nb_eleves = 2;
/*
afficherMenu();

int choix = lireChoix();
*/

saisirNotes(2,tabNotes);
afficherNotes(tabNotes,nb_eleves);


//printf("%d",trouverMeilleureNoteControle(tabNotes,3,2));

//printf("%.2f",calculerMoyenneGenerale(tabNotes,2));
return 0;
}
