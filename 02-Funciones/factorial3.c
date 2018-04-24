#include <stdio.h>
#include <stdlib.h>

double factorial(int);

int main(void)
{
    char opcion;
    int N;
    double  F;
    printf("Factorial\n");
    do
    {
        printf("Ingrese Numero: \t");
        scanf("%d", &N);
        printf("\n");
        F=factorial(N);
        if(F!=3 && F!=4)
        {
            printf("\n");
            printf("%.0f", F);
        }
        if(F==3)
        {
            printf("\n");
            printf("Nro. Negativo. Sin factorial");
        }
        if(F==4)
        {
            printf("\n");
            printf("Excede alcance");
        }
        printf("\n");
        printf("Otro calculo? (s/n)");
        fflush(stdin);
        opcion=getchar();
    }
    while(opcion=='s');
    return 0;
}

double factorial(int X)
{
    double F;
    if(X<0)
        return 3;
    if(X>80)
        return 4;
    // for(F=1 ;X>0; X--)
    //     F*=X;
    while(X>0){
        F*=X;
        X--;
    }
    return F;
}
