#include <stdio.h>
#include "tp3_2.h"

int main()
{
    int choix = 0;
    while (choix != 2)
    {
        afficherMenu();
        printf("\nVotre choix : ");
        scanf("%d",&choix);

        switch (choix)
        {
            case 1:

                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");


        }
    return 0;
    }
}