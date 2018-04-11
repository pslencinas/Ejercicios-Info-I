#include <stdio.h>

int main(void)
{
    int N, cont = 0;
    char opcion
    do
    {
        printf("Ingresar tabla a mostrar: ");
        scanf("%d", &N);

        while(N<0 || N>10)
        {
            printf("Valor incorrecto\n");
            printf("Ingresar una nueva tabla(0-10):");
            scanf("%d", &N);
        }

        while(cont <= 10)
        {
            printf("%d x %d = %d\n", N, cont, cont*N);
            cont = cont + 1;
        }

        cont = 0;
        printf("Quiere seguir ingresando (s/n): ");
        fflush(stdin);
        scanf("%c", &opcion);
    }while(opcion == 's');

    return 0;
}
