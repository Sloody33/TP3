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

void calcul_distribution(int montant)
{
    int billets50 = montant / 50;
    montant = montant % 50;

    int billets20 = montant / 20;
    montant = montant % 20;

    int billets10 = montant / 10;
    montant = montant % 10;

    int billets5 = montant / 5;

    printf("Billets distribues :\n");

    if (billets50 > 0)
        printf("%d billet(s) de 50 euros\n", billets50);

    if (billets20 > 0)
        printf("%d billet(s) de 20 euros\n", billets20);

    if (billets10 > 0)
        printf("%d billet(s) de 10 euros\n", billets10);

    if (billets5 > 0)
        printf("%d billet(s) de 5 euros\n", billets5);
}