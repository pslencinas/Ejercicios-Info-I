//Hacer un algoritmo donde se Ingresan 10 números enteros.
//Mostrar por pantalla el
//número más grande ingresado y en qué posición se ingreso

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, dato, mayor, posicion;
    mayor=0;
    posicion=0;

    for(i=1; i<=10; i++)
    {
        printf("Ingrese dato N%d: ", i);
        scanf("%d", &dato);

        if(dato > mayor){
            mayor = dato;
            posicion = i;
        }

    }

    printf("\n\n");
    printf("El Mayor Ingresado es: %d \n", mayor);
    printf("En la posicion: %d \n", posicion);
    printf("\n\n");

    return 0;
}

