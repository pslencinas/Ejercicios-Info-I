/*********************************************
Programa que ingresa 2 números y calcula si
alguno es divisible por 3
**********************************************/

#include <stdio.h>
int main(void)
{
    int  N1, N2, RN1, RN2;

    printf("Ingrese numero 1: ");
    scanf("%d",&N1);
    printf("Ingrese numero 2: ");
    scanf("%d",&N2);

    RN1 = N1 % 3;
    RN2 = N2 % 3;

    if(RN1 == 0)
        printf("\nEl numero %d es Divisible por 3", N1);
    else
        printf("\nEl numero %d NO es Divisible por 3", N1);

    if(RN2 == 0)
        printf("\nEl numero %d es Divisible por 3", N2);
    else
        printf("\nEl numero %d NO es Divisible por 3", N2);

    printf("\n\n");
    return 0;
}
