// Ingreso de notas e informo resultado

#include<stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");
    int Num;

    printf("Ingrese Nota del Examen: ");
    scanf("%d",&Num);

    if(Num<5)
        printf("\nSUSPENSO",Num);

    else if (Num >= 5 && Num < 7)
        printf("\nAPROBADO",Num);

        else if (Num >= 7 && Num < 9)
            printf("\nNOTABLE",Num);

            else if(Num >= 9 && Num < 10)
                printf("\nSOBRESALIENTE",Num);

                else if (Num == 10)
                    printf("\nMATRICULA DE HONOR",Num);
                else
                    printf("\nLA NOTA NO SE ENCUENTRA ENTRE 0 Y 10");

    printf("\n\n");
    return 0;
}

