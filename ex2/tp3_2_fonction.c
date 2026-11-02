#include <stdio.h>
#include "tp3_2.h"

void afficher_menu()
{
    printf("==== BANQUE - DISTRIBUTEUR ====\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quittez\n");
}

int saisir_montant()
{
    int montant;

    printf("Montant a retirer : ");
    scanf("%d", &montant);

    return montant;
}

int montant_valide(int montant)
{
    if (montant <= 0 || montant > 1000 || montant % 5 != 0)
    {
        return 0;
    }

    return 1;
}