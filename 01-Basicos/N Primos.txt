#include <stdio.h>

int main(void)
{
    int dato;
    int i, cont=0;

    printf("Ingrese Nro:\t");
    scanf("%d", &dato);

    for(i=2; i<=dato/2; i++)
    {
        if(dato%i == 0)
            cont++;
    }

    if(cont == 0)
        printf("El numero %d es Primo", dato);
    else
        printf("El numero %d NO es Primo", dato);

    printf("\n\n");
    return 0;
}
