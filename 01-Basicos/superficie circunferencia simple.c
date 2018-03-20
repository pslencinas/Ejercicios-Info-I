// Superficie de la circunferencia


#include <stdio.h>


int main(void)
{
    float radio, sup;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    sup = 3.14 * radio * radio;

    printf("La superficie es: %f", sup);

    return 0;
}
