#include <stdio.h>
int es_Primo(int);

int main(void)
{
    int dato, a;

    printf("Ingrese Nro:\t");
    scanf("%d", &dato);

    a = es_Primo(dato);

    if(a == 1)
        printf("Es primo");
    else
        printf("No es primo");


    printf("\n\n");
    return 0;
}

int es_Primo(int x)
{
    int i, cont=0;
    for(i=2; i<=x/2; i++)
    {
        if(x%i == 0)
            cont++;
    }

    if(cont == 0)
        return 1;
    else
        return 0;
}
