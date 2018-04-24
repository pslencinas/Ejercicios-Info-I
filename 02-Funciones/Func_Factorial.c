#include <stdio.h>
double factorial(int);

int main(void)
{
    int dato;

    printf("Ingrese Nro a factoriar:");
    scanf("%d", &dato);

    printf("\nEl factorial de %d es: %lf",dato, factorial(dato));

    printf("\n\n");
    return 0;
}

double factorial(int x)
{
    int i=1; 
    double acum=1;
    while(i<=x)
    {
        acum = acum * i;
        i++;
    }
return acum;
}
