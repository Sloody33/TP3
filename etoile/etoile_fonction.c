
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


void imgVide(int width, int max_height, char img[width][max_height])
{
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = 'a';
        }
    }
}

void afficher(int width, int max_height, char img[width][max_height]){
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }
}