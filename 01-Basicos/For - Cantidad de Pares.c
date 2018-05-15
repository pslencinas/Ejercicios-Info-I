/* Hacer un algoritmo que se ingresan 10 números enteros, mostrar por pantalla la
cantidad de números pares que se ingresaron*/

#include <stdio.h>
#define N 10
int main (void)

{
	int i, cant=0, dato;

	printf("Ingrese 100 numeros enteros\n\n");

	for(i=0; i<N; i++){
	    printf("Numero: ");
	    scanf ("%d",&dato);

	    if(dato%2 == 0)
	        cant++;
	}

	printf ("\n\n\n");
	printf ("Las cantidad de numeros pares ingresados fueron: %d",cant);
	printf ("\n\n\n");

	return 0;
}


