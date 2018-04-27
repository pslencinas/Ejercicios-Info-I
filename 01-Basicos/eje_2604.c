#include <stdio.h>

int main(void)
{
    float nota, Max, Min, acum=0, prom=0;
    int i=0;

    printf("Ingrese nota: ");
    scanf("%f", &nota);

    while(nota > 0)
    {
        if(i == 0){
            Max = nota;
            Min = nota;
        }else{
            if(nota > Max)
                Max = nota;
            if(nota < Min)
                Min = nota;
        }
        if(nota >= 7)
            prom ++;
        acum = acum + nota;
        i++;

        printf("Ingrese nota: ");
        scanf("%f", &nota);
    }

    if(i == 0){
        printf("dato invalido!!");
    }else{
        printf("Promedio = %.2f\n", acum/i);
        printf("Nota Maxima: %.2f\n", Max);
        printf("Nota Minima: %.2f\n", Max);
        printf("Porcentaje Prom: %.2f", prom/i*100);
    }

    printf("\n\n");
    return 0;
}
