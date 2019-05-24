#include <stdio.h>
#include <stdlib.h>
#define N 5

int main (void)
{
    char NAP[4][N];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        fgets(NAP[i], N, stdin);

    }

    printf("\n\n");

    for(i=0; i<4; i++)
        puts(NAP[i]);

    printf("\n\n");
    system ("pause");
    return 0;
}

