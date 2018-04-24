#include <stdio.h>
#include <math.h>
float sumaTres(float, float, float);    //prototipo de mi función

int main(void)
{
    float X, Y, Z, resultado;

    printf("Ingrese X: ");
    scanf("%f", &X);
    printf("Ingrese Y: ");
    scanf("%f", &Y);
    printf("Ingrese Z: ");
    scanf("%f", &Z);

    resultado = sumaTres(X,Y,Z);
    printf("\nLa suma es: %.2f", resultado);

    printf("\n\n");
    return 0;
}

float sumaTres(float a, float b, float c){
    float res;
    res = a + b + c;
    return res;
}
