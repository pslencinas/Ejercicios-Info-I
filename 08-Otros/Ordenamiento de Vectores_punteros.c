#include <stdio.h>
#include <stdlib.h>
#define N 10
void ordena(int *);

int main (void)
{
    int vec[N]={0}, i=0;

    for (i=0; i<N; i++)
    {
        printf ("Ingrese un valor: " );
        scanf ("%d", &vec[i]);
    }

    ordena(vec);

    for (i=0; i<N; i++)
        printf ("\n V[%d]valor: %d", i, vec[i]);

    printf("\n\n");
    system ("pause");
    return 0;
}


void ordena (int *p)
{
    int i,j,aux;

    for (j=1; j<N; j++)
    {
        for (i=0; i<N-1; i++)
        {
            if (p[i] > p[i+1])
                {
                aux=p[i];
                p[i]=p[i+1];
                p[i+1]=aux;
                }
        }
    }

}

