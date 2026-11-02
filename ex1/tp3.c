#include <stdio.h>
#include "tp3.h"

int main()
{
    int tabNotes[30][3];
    int nb_eleves = 0;
    int choix = -1;
    int numeroEleve;
    int notesSaisies = 0;

    while (choix != 0)
    {
        afficherMenu();

        printf("\nVotre choix : ");
        choix = lireChoix();

        switch (choix)
        {
            case 1:
                nb_eleves = saisirNombreEleve();
                notesSaisies = 0;
                break;

            case 2:
                if (nb_eleves > 0)
                {
                    saisirNotes(nb_eleves, tabNotes);
                    notesSaisies = 1;
                }
                else
                {
                    printf("Saisissez d'abord le nombre d'eleves.\n");
                }
                break;

            case 3:
                if (notesSaisies)
                    afficherNotes(tabNotes, nb_eleves);
                else
                    printf("Saisissez d'abord les notes.\n");
                break;

            case 4:
                if (notesSaisies)
                {
                    printf("Numero de l'eleve : ");
                    scanf("%d", &numeroEleve);

                    if (numeroEleve >= 1 && numeroEleve <= nb_eleves)
                        printf("Moyenne : %.2f\n", calculerMoyenneEleve(tabNotes, numeroEleve - 1));
                    else
                        printf("Numero invalide.\n");
                }
                else
                    printf("Saisissez d'abord les notes.\n");
                break;

            case 5:
                if (notesSaisies)
                    printf("Moyenne generale : %.2f\n", calculerMoyenneGenerale(tabNotes, nb_eleves));
                else
                    printf("Saisissez d'abord les notes.\n");
                break;

            case 6:
                if (notesSaisies)
                    afficherMeilleuresNotes(tabNotes, nb_eleves);
                else
                    printf("Saisissez d'abord les notes.\n");
                break;

            case 0:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide.\n");
        }
    }

    return 0;
}