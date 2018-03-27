/*
Como resultado de una encuesta se recogen los siguientes datos: edad, sexo y
altura. Se pide realizar un programa que informe el porcentaje de mujeres mayores
de 25 años, la cantidad de varones menores de 18 años y el porcentaje de
individuos mayores de 18 años cuya altura supera los 170 cm. Ingresar únicamente
40 encuestas.
*/

#include <stdio.h>
#define ENC 5

int main (void)

{
int i, edad, altura, cuentaFMay25=0, cuentaMNen18=0, cuentaAltura=0;
char sexo;


printf("Ingrese los siguientes datos: Edad, Sexo y Altura.");
printf("\n\n");

for(i=0; i<ENC; i++)
{
    printf("Ingrese Edad: ");
    scanf("%d",&edad);
    fflush(stdin);
    printf("Ingrese Sexo: ");
    scanf("%c",&sexo);
    printf("Ingrese Altura (en cm): ");
    scanf("%d",&altura);

    if(sexo == 'F' && edad >25){
        cuentaFMay25 ++;
    }
    if(sexo == 'M' && edad < 18){
        cuentaMNen18 ++;
    }
    if(edad > 18 && altura > 170){
        cuentaAltura ++;
    }

    printf("\n");

}
    printf("\n");
    printf("\nEl Porcentaje de Mujeres mayores a 25 es: %.2f", (float)cuentaFMay25/ENC*100);
    printf("\nLa Cantidad de varones menores a 18 es: %d", cuentaMNen18);
    printf("\nEl Porcentaje de Individuos mayores a 170cm es: %.2f", (float)cuentaAltura/ENC*100);
    printf("\n");

return 0;

}
