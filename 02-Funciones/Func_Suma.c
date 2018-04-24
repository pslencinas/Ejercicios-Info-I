#include <stdio.h>

float SUMA (float, float); //Prototipo de la función

int main(void)
{
    float A, B, R;

    printf("Ingrese numero: ");
    scanf("%f", &A);
    printf("Ingrese numero: ");
    scanf("%f", &B);

    R = SUMA (A,B);

    printf("El Resultado de la suma es: %.2f\n\n", R);

    return 0;
}

float SUMA(float X, float Y) // A y PEPE son parámetros formales
{
    float Z;
    Z = X + Y;
    return Z;
}
