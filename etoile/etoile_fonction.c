
#include <stdio.h>
#include "etoile.h"

int demandeTaille(){

int n = 0;
printf("Choisissez un nombre entre 5 et 10\n");
scanf("%d",&n);

while (n<5 || n>10)
{
    printf("---\n Nombre invalide\n Choisissez un nombre entre 5 et 10 \n");
    scanf("%d",&n);
}
return n;
}


void imgVide(int width, int max_height, char img[max_height][width])
{
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = '_';
        }
    }
}

void afficher(int width, int max_height, char img[max_height][width]){
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }
}

void dessinerPointe(int width, int max_height, int n, char img[max_height][width])
{
    int mid = width / 2;

    for (int i = 0; i < n; i++)
    {
        int gauche = mid - i;
        int droite = mid + i;

        for (int j = 0; j < width; j++)
        {
            if (j == gauche || j == droite)
                img[i][j] = 'A';

            else if (j > gauche && j < droite)
                img[i][j] = 'S';
        }
    }
}