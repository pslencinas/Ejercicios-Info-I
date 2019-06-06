#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main(void)
{
int V[N], i, k, F, aux;

printf("Vector desordenado(Presione enter p/seguir)\n\n");
getchar();

srand(time(NULL));

for(i=0; i<N; i++)              //Genero Vector de prueba
    {
    V[i]= rand()%N;
    printf("%d\t", V[i]);
    }

for(F=1, i=0; i<N-1 && F==1; i++)       //Burbuja
    for(F=0, k=0; k<N-i-1; k++)
        if(V[k]>V[k+1])
            {
            aux=V[k];
            V[k]=V[k+1];
            V[k+1]=aux;
            F=1;
            }

printf("Vector ordenado(Cualquier enter p/seguir)\n\n");
getchar();
for(i=0; i<N; i++)
    printf("%d\t",V[i]);

getchar();
printf("\n\n");
return 0;
}
