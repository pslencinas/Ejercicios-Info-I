#include <stdio.h>
#include <stdio_ext.h>
#define N 10

int main (void)
{
    int vec[N],aux, i=0, j=0, inf=0, sup=N-1, medio;
    char opcion;

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


    printf("\n\nIngrese un valor a buscar: ");
    scanf("%d", &aux);

    medio = (inf + sup) / 2;
    
    while(aux != vec[medio] && sup>inf){
        
        if(aux > vec[medio])
            inf = medio + 1;
        else
            sup = medio - 1;
        
        medio = (inf + sup) / 2;
        
    }

		if(aux == vec[medio])
        printf("\nEncontre el dato");
    else
        printf("\nNo hay registros para ese dato ingresado!!!");

    printf("\n\n");
    return 0;
}
