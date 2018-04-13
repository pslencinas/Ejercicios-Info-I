/*********************************************
Programa que ingresa 2 números y calcula si
alguno es divisible por 3
**********************************************/

#include <stdio.h>
int main(void)
{
    int  N1, N2;

    printf("Ingrese numero 1: ");
    scanf("%d",&N1);
    printf("Ingrese numero 2: ");
    scanf("%d",&N2);

    if(N1 > 0)
    {
        if(!(N1 % 3))
            printf("\nEl numero %d es Divisible por 3", N1);
        else
            printf("\nEl numero %d NO es Divisible por 3", N1);
    }
    else{
        printf("Dato N1 incorrecto");
    }

    if(N2 > 0)
    {
        if(!(N2 % 3))
            printf("\nEl numero %d es Divisible por 3", N2);
        else
            printf("\nEl numero %d NO es Divisible por 3", N2);
    }
    else{
        printf("Dato N2 incorrecto");
    }

    printf("\n\n");
    return 0;
}
