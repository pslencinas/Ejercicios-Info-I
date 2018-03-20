#include <stdio.h>
#define TAM 1000

int main (void)
{

	int A[TAM], i=0, k=0; acum=0, aux;
	float prom;

	scanf("%d", &aux);
	while(aux !=0 && i < 1000)
	{

		A[i] = aux;
		acum += A[i];
		i++;
		scanf("%d", &aux);

	}
	prom = (float)acum/i;

	for(k=0; k<i; k++)
	{
		if(A[k] > prom)
			printf("\nvalor mayor al promedio: %d",A[k]);
		
	}

return 0;


}