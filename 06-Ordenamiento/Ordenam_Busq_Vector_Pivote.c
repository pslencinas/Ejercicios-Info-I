#include <stdio.h>
#define N 5

int main (void)
{
    int vec[N],aux, i=0, j=0, aux;
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


    do{
        printf("Ingrese un valor a buscar: ");
        scanf("%d", &aux);

        for(i=0; i<N; i++){
            if(aux == vec[i]){
                printf("Valor encontrado!!!");
                break;
            }
        }
        if(i==N)
            printf("Valor NO encontrado...");

        printf("Desea seguir buscando valores (s/n): ");
        fflush(stdin);
        opcion = getchar();
        
    }while(opcion == 's');

    printf("\n\n");
    return 0;
}

