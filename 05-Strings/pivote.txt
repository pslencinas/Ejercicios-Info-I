// Ordenamiento por pivote - Vector GRANDE!!!
// Junio 2014

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

int main(void)
{
int V[N], i, k, aux;

printf("Vector desordenado(Presione enter p/seguir)\n\n");
getchar();

srand(time(NULL));

for(i=0; i<N; i++)          //Genero Vector de prueba
    {
    V[i]= rand()%N;
    printf("%d\t", V[i]);
    }

for(i=0; i<N-1; i++)        //Pivote
    for(k=i+1; k<N; k++)
        if(V[i]>V[k])
            {
            aux=V[i];
            V[i]=V[k];
            V[k]=aux;
            }

printf("Vector ordenado(Presione enter p/seguir)\n\n");
getchar();
for(i=0; i<N; i++)
    printf("%d\t",V[i]);

printf("\n\n");
return 0;
}
