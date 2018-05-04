#include <stdio.h>
int intervalo(int, int);
int main(void)
{

    int A, B;
    printf("Ingrese intervalo A: ");
    scanf("%d", &A);
    printf("Ingrese intervalo B: ");
    scanf("%d", &B);

    printf("La suma es: %d", intervalo(A,B));

    printf("\n\n");
    return 0;
}

int intervalo (int X, int Y)
{
    int i, acum=0;

    // while(i <= Y)
    // {
    //     acum = acum + i;
    //     i++;
    // }
    for(i=X; i<=Y; i++)
        acum = acum + i;

    return acum;
}
