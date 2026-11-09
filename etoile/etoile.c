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



    return 0;
}