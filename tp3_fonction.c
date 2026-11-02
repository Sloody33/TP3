#include <stdio.h>
#include "tp3.h"

void afficherMenu()
{
printf("===== GESTION DE NOTES =====\n \
1. Saisir le nombre d'eleves\n \
2. Saisir les notes des eleves\n \
3. Afficher toutes les notes\n \
4. Afficher la moyenne d'un eleve\n \
5. Afficher la moyenne general\n \
6. Afficher la meilleure note de chaque controle\n \
0. Quittez\n");
}

int lireChoix()
{
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

void saisirNotes(int eleves,  int tabNote[30][3])
{
  
    printf("Saisir des notes pour %d eleves et 3 controles", eleves);
    for (int i = 0; i < eleves; i++)
    {
        printf("Eleve %d :\n",i);
        for (int j = 0; j < 3; j++)
        {
            printf("Entrez la note %d :\n",j);
            scanf("%d",&tabNote[i][j]);
            while (tabNote[i][j] < 0 || tabNote[i][j] >20)
            {
                printf("Entrez une note valide",j);
                scanf("%d",&tabNote[i][j]);
            }
            
            
        }
        

    }
    
}

void afficherNotes(int tabNotes[30][3],int nb_eleves)
{
    printf("Tableau de note :\n");
    printf("Eleve C1 C2 C3\n");
    for (int i = 0; i < nb_eleves; i++)
    {
        printf("%d     %d  %d  %d\n",i+1,tabNotes[i][0],tabNotes[i][1],tabNotes[i][2]);
    }
    
}

float calculerMoyenneEleve(int tabNotes[30][3],int numeroEleve)
{
    float total = 0;
    
    for (int i = 0; i < 3; i++)
    {
    total += tabNotes[numeroEleve][i];
    }
    float moyenne = total/3;
    return moyenne ;
}