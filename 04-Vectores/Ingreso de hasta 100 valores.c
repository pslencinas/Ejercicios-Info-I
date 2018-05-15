#include <stdio.h>
#include <stdlib.h>
#define N 100

int main (void)
{
    int vec[N], i=0, j=0, acum=0, aux;
    float prom;
    
    printf ("Ingrese un valor: " );
    scanf ("%d", &aux);
    
    while (aux > 0 && i<N){
      
      vec[i] = aux;
      acum = acum + vec[i];
      i++;
      printf ("Ingrese un valor: " );
      scanf("%d", &aux);
    }

    prom = (float)acum / i;

    for (j; j<i; j++)
        printf ("\n V[%d]valor: %d", j, vec[j]);

    printf("\n\nPromedio de valores: %.2f", prom);
    printf("\n");
    for (j=0; j<i; j++)
    {
        if(vec[j]>prom)
            printf("\nValor mayor al promedio: %d",vec[j]);
    }

    printf("\n\n");
    return 0;
}

