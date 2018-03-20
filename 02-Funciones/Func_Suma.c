#include <stdio.h>
#include <stdlib.h>

float SUMA (float, float);

int main(void)
{
    float A, B, R;

    printf("Ingrese numero: ");
    scanf("%f", &A);
    printf("Ingrese numero: ");
    scanf("%f", &B);

    R = SUMA (A,B);

    printf("El Resultado de la suma es: %.2f", R);

    printf("\n\n");
    system("PAUSE");
    return 0;
}

float SUMA(float A, float PEPE)
{
    float P;
    P = A + PEPE;
    return(P);
}
