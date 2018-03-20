#include <stdio.h>
#include <stdlib.h>
#define N 10

int main (void)
{
	int vec[N], i=0, acum=0;
	float prom;

	for (i=0; i<N; i++)
	{
		printf ("Ingrese un valor: " );
		scanf ("%d", &vec[i]);
	}

	for (i=0; i<N; i++)
	{
		acum = acum + vec[i];
	}
	prom = (float)acum / N;

	for (i=0; i<N; i++)
		printf ("\n V[%d]valor: %d", i, vec[i]);

	printf("\n\nPromedio de valores: %.2f", prom);
	printf("\n");
	for (i=0; i<N; i++)
	{
		if(vec[i]>prom)
			printf("\nValor mayor al promedio: %d",vec[i]);
	}

	printf("\n\n");
	return 0;
}

