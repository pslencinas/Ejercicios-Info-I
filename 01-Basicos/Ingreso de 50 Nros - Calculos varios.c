/*
Desarrollar un algoritmo que permita ingresar 50 n�meros naturales, luego informar
por pantalla:
a) La sumatoria de los valores m�ltiplos de 3.
b) La cantidad de valores m�ltiplos de 5.
c) La sumatoria de los valores que se ingresan y son par.
*/

#include <stdio.h>
int main (void)

{
int dato, i, sumaMultTres=0, cantMultCinco=0, sumaPares=0;

printf("Ingrese de 50 Numeros Naturales.");
printf("\n\n");
for( i=0 ;  i< 50 ; i++ )
{
    printf("Ingrese Numero: ");
    scanf("%d",&dato);

    if(dato%3 == 0){ //compruebo si es multiplo de 3
        sumaMultTres = sumaMultTres + dato;
    }
    if(dato%5 == 0){ //compruebo si es multiplo de 5
        cantMultCinco ++;
    }
    if(dato%2 == 0){ //compruebo si es par
        sumaPares = sumaPares + dato;
    }

}
    printf("\n");
    printf("\nLa Sumatoria de los multiplos de 3 es: %d", sumaMultTres);
    printf("\nLa Cantidad de los multiplos de 5 es: %d", cantMultCinco);
    printf("\nLa Sumatoria de los Pares es: %d", sumaPares);
    printf("\n");



return 0;

}
