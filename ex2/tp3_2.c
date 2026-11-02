
#include <stdio.h>
#include "tp3_2.h"

int main()
{
    int choix = 0;

    while (choix != 2)
    {
        afficher_menu();

        printf("\nVotre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1:
                {
                    int montant = saisir_montant();

                    if (montant_valide(montant))
                    {
                        printf("Montant valide !\n");
                    }
                    else
                    {
                        printf("Montant invalide !\n");
                    }

                    break;
                }

            case 2:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide.\n");
        }
    }

    return 0;
}
