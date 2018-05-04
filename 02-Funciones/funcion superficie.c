#include <stdio.h>
#include <math.h>
float superficie (float);

int main(void)
{
    float radio;

    printf("Ingrese Radio: ");
    scanf("%f", &radio);

    printf("\nLa superficie es: %.2f", superficie(radio));
    printf("\n\n");
    return 0;
}

float superficie(float X){
    float res;
    res = M_PI * pow(X, 2);
    return res;
}
