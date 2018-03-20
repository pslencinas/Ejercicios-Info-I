// Superficie de la circunferencia

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void)
{
    float radio, sup;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    if(radio > 0)
    {
        sup = PI * pow(radio,2); //formula
        printf("\nLa superficie es: %.2f", sup);
    }else
    {
        printf("Dato erroneo!!");
    }
    printf("\n\n");

    return 0;
}
