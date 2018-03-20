// ingresar 2 números y mostrar por pantalla cual de los 2 es mayor

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Ingrese dato A: ");
    scanf("%d", &a);

    printf("Ingrese dato B: ");
    scanf("%d", &b);

    if(a > b)
    {
        printf("\nEl dato A es mayor!");
    }else
    {
        printf("\nEl dato B es mayor!");
    }
    printf("\n\n");

    return 0;
}
