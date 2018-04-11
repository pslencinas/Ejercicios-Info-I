#include <stdio.h>

int main(void)
{
    int tabla, cont = 0;
    printf("Ingresar tabla a mostrar: ");
    scanf("%d", &tabla);

    while(cont <= 10)
    {
        printf("%d x %d = %d\n", tabla, cont, cont*tabla);
        cont = cont + 1;
    }
    return 0;
}
