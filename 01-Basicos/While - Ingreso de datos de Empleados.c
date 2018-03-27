/*
Se registra en un programa los siguientes datos de los empleados de una empresa
Número de legajo, sueldo y sexo (1-femenino y 2-masculino). Diseñar un algoritmo
que permita informar cuantas mujeres ganan más de $500 y cuantos hombres
ganan menos de $400. Finaliza el ingreso con el numero cero en legajo
*/

#include <stdio.h>
int main (void)

{
int NumeroLegajo, Sueldo, Sexo, ContFemeninoMayor500=0, ContMasculinoMenor400=0;

printf("Ingrese los siguientes datos de los Empleados de la Empresa\n\n");


printf("Numero de Legajo: ");
scanf ("%d",&NumeroLegajo);

while (NumeroLegajo!=0){
    fflush (stdin);
    printf("Sueldo: ");
    scanf("%d",&Sueldo);
    printf ("Sexo (1-Femenino o 2-Masculino): ");
    scanf("%d",&Sexo);

    if ((Sexo == 1) && (Sueldo > 500))
        ContFemeninoMayor500++;

    if ((Sexo == 2) && (Sueldo < 400))
        ContMasculinoMenor400++;

    printf("\nNumero de Legajo:");
    scanf ("%d",&NumeroLegajo);
}


printf ("\n\n\n");
printf ("Las Mujeres que Ganan mas de 500: %d",ContFemeninoMayor500);
printf ("\n");
printf ("Los Hombres que ganan menos de 400:%d",ContMasculinoMenor400);
printf ("\n\n\n");

return 0;
}


