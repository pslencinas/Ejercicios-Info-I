/**********************************************
Programa que calcula el precio con descuento
***********************************************/

#include <stdio.h>
int main (void)
{ 
	float A, B, C;

	printf("Ingrese el Precio: ");
	scanf("%d",&A);

	B = A * 0.9;
	C = A - B;

  printf("Precio con descuento (9%) es :%f",C);
  printf("\n\n");
	return 0;

}