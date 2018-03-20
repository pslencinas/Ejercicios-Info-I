/*******************************************
Programa que calcula el doble de un número
*******************************************/

#include <stdio.h>

int main(void)
{
    int  N, D;

    printf("Ingrese numero entero: ");
    scanf("%d",&N);
    D = N * 2;
    
    printf("\nEl doble es: %d", D);
	printf("\n\n");

    return 0;
}
