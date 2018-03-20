#include <stdio.h>

#define TAM 5

int main (void)
{
    int vec[TAM], i;

    for (i=0; i<TAM; i++)
    {
        printf ("Ingrese un valor: " );
        scanf ("%d", &vec[i]);
    }

    for (i=TAM-1; i>=0; i--)
        printf ("\n V[%d]valor: %d", i, vec[i]);

    for (i=0; i<TAM; i++)
        printf ("\n V[%d]valor: %d", TAM-1-i, vec[TAM-1-i]);

    printf("\n\n");
    return 0;
}

