#include <stdio.h>
#include "tp3.h"

void afficherMenu()
{
//affichage du tableau
printf("===== GESTION DE NOTES =====\n \
1. Saisir le nombre d'eleves\n \
2. Saisir les notes des eleves\n \
3. Afficher toutes les notes\n \
4. Afficherb la moyenne d'un eleve\n \
5. Afficher la moyenne general\n \
6. Afficher la meilleure note de chaque controle\n \
0. Quittez\n");
}

int lireChoix(){
    int choix;
    scanf("%d",&choix);
    return choix;
}

int saisirNombreEleve()
{
    int nb_eleves;
    printf("Choississez un nombre d'eleves entre 1 et 30 inclus");
    scanf("%d",&nb_eleves);
    while (nb_eleves< 1 || nb_eleves >30)
    {
        printf("Nombre invalide\n \
Choississez un nombre d'eleves entre 1 et 30 inclus");
        scanf("%d",&nb_eleves);
    }
    return nb_eleves;
}