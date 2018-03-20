// Programa que pide el ingreso de un password e informa si esta bien
// 5 intentos como máximo

#include <stdio.h>
#include <stdlib.h>

# define PASSWORD 123	// cargo el password a comparar.

int main(void)
{
    int iDato, k=0;

    do{
        if(k==5){
            printf("Ha ingresado 5 valores incorrectos. CHAUUU!!!! \n\n");
            return 0;
        }
        printf("Ingrese Password (3 digitos): ");
        scanf("%d",&iDato);
        k++;

    }while(iDato != PASSWORD);

    printf("\n\nPassword Correcta!");
    printf("\n\n");
    system("PAUSE");
    return 0;
}
