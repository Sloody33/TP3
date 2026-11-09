#include <stdio.h>
#include "etoile.h"
int main()
{
int n = 0;
printf("Choisissez un nombre entre 5 et 10\n");
scanf("%d",&n);

while (n<5 || n>10)
{
    printf("---\n Nombre invalide\n Choisissez un nombre entre 5 et 10 \n");
    scanf("%d",&n);
}

int width = n * n;
int max_height = 3*n -1;
char img[width][max_height];

    return 0;
}