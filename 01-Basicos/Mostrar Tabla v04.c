#include <stdio.h>

int main(void)
{
    int N, cont = 0, qty=0, cPares=0;
    char opcion;
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
        qty++;
        if(N % 2 == 0)
            cPares++;
        cont = 0;
        printf("Quiere seguir ingresando (s/n): ");
        fflush(stdin);
        scanf("%c", &opcion);
    }while(opcion == 's' || opcion == 'S');

    printf("\n\nSe solicitaron %d Tablas\n", qty);
    printf("\n\nCantidad de Tablas Pares: %d \n", cPares);
    printf("\n\nPorcentaje de Tablas Pares: %.2f \n", (float)cPares/qty*100);

    return 0;
}
