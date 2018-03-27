/*
Desarrollar un programa que permita ingresar números reales mayores que 0 (cero),
finalizar el ingreso cuando no se cumpla esta condición e informar el valor menor y
el valor mayor del conjunto.
*/

#include <stdio.h>
int main (void)

{
float dato, Menor, Mayor;

printf("Ingrese Numeros Reales mayores a 0(cero).");
printf("\n\n");

printf("Ingrese Numero: ");
scanf("%f",&dato);
Menor = Mayor = dato;       //digo que el primer valor, por ser el único hasta el momento
                            // es tanto Mayor como Menor
while(dato > 0)
{

    if (dato > Mayor){
        Mayor = dato;
    }
    if (dato < Menor){
        Menor = dato;
    }

    printf("Ingrese Numero: ");
    scanf("%f",&dato);

}
    printf("\n");
    printf("\nEl Mayor ingresado fue: %f", Mayor);
    printf("\nEl Menor ingresado fue: %f", Menor);
    printf("\n");



return 0;

}
