#include <stdio.h>

int main(void)
{
    int cont=0, edad, mayor, menor, acum=0;
    float prom;
    printf("Ingrese Edad: ");
    scanf("%d", &edad);
    while(edad >0)
    {
        if(cont == 0)
        {
            mayor = edad;
            menor = edad;
        }
        if(edad > mayor)
            mayor = edad;
        if(edad < menor)
            menor = edad;

        acum = acum + edad;
        cont++;

        printf("Ingrese Edad: ");
        scanf("%d", &edad);
    }
    prom = (float)acum / cont;

    printf("\n\n");
    printf("Promedio: %.2f \n", prom);
    printf("El mayor es: %d \n", mayor);
    printf("El menor es: %d \n", menor);
    printf("\n\n");

    return 0;
}


