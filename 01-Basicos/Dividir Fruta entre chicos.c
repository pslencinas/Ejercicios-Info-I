// Hacer un programa que ingresas un numero que 
// representa cierta cantidad de una fruta y dividis esa cantidad
// por 3 chicos.Mostrar en pantalla el resultado

#include <stdio.h>
int main (void)

{ 
	float A, B;

	printf(" Ingrese Cantidad de Frutas):");
	scanf("%d",&A);

  B = (float)A / 3;

  printf ("La Cantidad de Fruta que le corresponde a cada chico es :%2f",B);
  
	return 0;

}