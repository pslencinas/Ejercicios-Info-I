#include <stdio.h>
float mi_funcion(float );
int main(void)
{
    float a, res;
    char c;
    do{
        printf("Ingrese valor de X: ");
        scanf("%f", &a);
        res = mi_funcion(a);
        printf("El valor de Y es %.2f", res);

        printf("\n\nQuiere seguir ingresando");
        printf("\n (s-Si) - (n-No)");
        fflush(stdin);
        //scanf("%c", &c);
        c = getchar();
    }while(c == 's');

    printf("\n\n");

    return 0;
}

float mi_funcion(float X)
{
    float Y;
    Y = X * X + 5 * X + 2;
    return Y;
}

