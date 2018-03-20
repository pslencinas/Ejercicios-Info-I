// Programa que muestra los multiplos de 5 hasta el 100
// Informa los valores y la suma

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0, iDato, iSumPos=0, iProNeg=0;

    printf("Ingrese 10 Numeros distintos a cero: \n");

    for(i=0; i<10; i++){
        printf("\nN: ");
        scanf("%d", &iDato);

        if(iDato == 0){
            printf("Valor igual a cero");
            return 0;
        }

        if(iDato > 0){
            iSumPos += iDato;
        }

        if(iDato < 0){
            iProNeg *= iDato;
        }

    }

    printf("\nLa suma de los Positivos es: %d", iSumPos);
    printf("\nEl producto de los Negativos es: %d", iProNeg);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
