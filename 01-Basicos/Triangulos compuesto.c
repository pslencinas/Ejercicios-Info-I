// Programa que pide el ingreso de los lados de un triangulo
// e informa que tipo de triangulo es con operadores lógicos

#include <stdio.h>

int main(void)
{
    float A, B, C;

    printf("Ingrese los 3 lados de un Triangulo: \n");
    printf("\nLado A: ");
    scanf("%f",&A);
    printf("\nLado B: ");
    scanf("%f",&B);
    printf("\nLado C: ");
    scanf("%f",&C);

    if((A == B) && (B == C))
    {
        printf("\nTriangulo Equilatero");
    }else
    {
        if((A == B)||(B==C)||(C==A))
        {
            printf("\nTriangulo Isosceles");
        }else
        {
            printf("\nTriangulo Escaleno");
        }
    }
    printf("\n\n");
    return 0;
}
