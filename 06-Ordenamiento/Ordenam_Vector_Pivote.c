#include <stdio.h>
#define N 5

int main (void)
{
    int vec[N],aux, i=0, j=0;

    for (i=0; i<N; i++)
    {
        printf ("Ingrese un valor: " );
        scanf ("%d", &vec[i]);
    }

    for (i=0; i<N-1; i++)           //vueltas de referencias
        for (j=i+1; j<N; j++)       //comparaciones
        {
            if (vec[i] > vec[j])
                {
                aux=vec[i];         //swapping
                vec[i]=vec[j];      //intercambio
                vec[j]=aux;
                }
        }

    for (i=0; i<N; i++)
        printf ("\n V[%d]valor: %d", i, vec[i]);

    printf("\n\n");
    return 0;
}

