#include <stdio.h>
#include "etoile.h"
int main()
{
int n = demandeTaille();

int width = n * n;
int max_height = 3*n -1;
char img[max_height][width];

imgVide(width,max_height,img);
afficher(width, max_height, img);

    return 0;
}