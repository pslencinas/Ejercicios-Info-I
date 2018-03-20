// Programa que pide el ingreso de N Reales
// y calcula el promedio de Reales ingresados

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iDato, k=0, iCont=0;
    float fProm;

    printf("Ingrese Numeros Naturales: \n");
    printf("\nN: ");
    scanf("%d",&iDato);

    while(iDato>0){
        k++;
        if(iDato > 20){
            iCont++;
        }
        printf("\nN: ");
        scanf("%d",&iDato);

    }

    if(k==0){
        printf("El primer numero ingresado no es Natural");
    }else{
        fProm = (float)iCont/k*100;
        printf("\nCantidad de N ingresados: %d, Mayores a 20: %d",k,iCont);
        printf("\nPromedio de N Naturales Ingresados: %f",fProm);
    }
    printf("\n\n");
    system("PAUSE");
    return 0;
}
