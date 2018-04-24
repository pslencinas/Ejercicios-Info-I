#include <stdio.h>

double factorial(int);

int main(void)
{
    int N;
    printf("\n");
    printf("Factorial\n");
    printf("Ingrese Numero:\t");
    scanf("%d", &N);
    printf("\n");
    printf("%lf", factorial(N));
    printf("\n");
    return 0;
}

double factorial(int X)
{
    double F;
    while(F+1;X>0)
    {
        F*=X;
        X--;
    }
    return F;
}
