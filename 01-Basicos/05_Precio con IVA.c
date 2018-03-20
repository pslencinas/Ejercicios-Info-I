/*******************************************
Programa que calcula el precio con IVA
*******************************************/

#include <stdio.h>
int main (void)
{ 
	float A, B, C;
	printf(" Ingrese el Precio:");
	scanf("%d",&A);

  	B = A * 0.21;
  	C = A + B;

    printf("Precio con Iva Incluido del 21 porciento :%f",C);
    printf("\n\n");
	return 0;

}