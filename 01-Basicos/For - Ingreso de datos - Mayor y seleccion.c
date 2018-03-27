/*
Hacer un algoritmo donde se Ingresan los siguientes datos de 20 alumnos:
nota (entero), sexo (char =F/M).
Mostrar por pantalla la mejor nota y si es alumno o alumna
*/

#include <stdio.h>
int main (void)

{
    int I, Nota=0, MejorNota;
    char Sexo, SexoMejorNota;

    printf(" Ingrese Nota y Sexo de los 20 Alumnos: ");

    for( I = 0 ;  I < 20 ; I ++ )
    {
        printf("\nNota:");
        scanf("%d",&Nota);
        fflush(stdin);
        printf("Sexo (F/M):");
        scanf("%c",&Sexo);

        if(I==0){                       // esto se hace con el primer ingreso y nunca mas. La idea es que
            MejorNota = Nota;           // como es el primer ingreso siempre ser� la mejor Nota hasta que
            SexoMejorNota = Sexo;       // ingresen otras.
        }

        if (Nota > MejorNota)
        {   MejorNota = Nota;
            SexoMejorNota = Sexo;
        }

    }
    printf("\n\n\n");
    printf("La Mejor Nota es %d y el sexo es %c", MejorNota, SexoMejorNota);
    printf("\n\n\n");

    return 0;

}
