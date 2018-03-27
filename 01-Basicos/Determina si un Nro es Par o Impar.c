/*********************************************
Programa que calcula si un Nro es Par o Impar
**********************************************/

#include <stdio.h>
int main(void)
{
    int  N, resto;

    printf("Ingrese numero entero: ");
    scanf("%d",&N);
    resto = N % 2;
    if(resto == 0)
        printf("\nEl numero %d es par", N);
    else
        printf("\nEl numero %d es impar", N);

    printf("\n\n");
    return 0;
}
