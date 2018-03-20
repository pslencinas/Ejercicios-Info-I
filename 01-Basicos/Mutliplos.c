#include <stdio.h>

int main(void)
{
    int i,dato;

    printf("Ingrese Nro:\t");
    scanf("%d", &dato);

    for(i=1; i<=dato; i++)
    {
        if(dato%i == 0)
            printf("\n%d es multipo de %d", i, dato);
    }

    printf("\n\n");
    return 0;
}
