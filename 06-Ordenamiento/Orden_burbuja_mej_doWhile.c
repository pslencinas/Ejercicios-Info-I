// Ordenamiento Método Burbuja Mejorada

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
{
	int V[N], i, F, aux, R=0, B=0;

	printf("Vector desordenado: \n");
  
	for(i=0; i<N; i++)              //Genero Vector de prueba
		{
		V[i]= rand()%N;
		printf("\nV[%d]: %d", i, V[i]);
		}

	do{
		for(i=0, B=0, R++; i<N-R; i++)       //Burbuja mejorada
			if(V[i]>V[i+1])
			{
				aux=V[i];
				V[i]=V[i+1];
				V[i+1]=aux;
				B=1;
			}
	}while(B);

	printf("\n\nVector ordenado(Cualquier enter p/mostrar)\n");
	getchar();
	for(i=0; i<N; i++)
		printf("\nV[%d]: %d", i, V[i]);

	printf("\n\n");
	return 0;
}
