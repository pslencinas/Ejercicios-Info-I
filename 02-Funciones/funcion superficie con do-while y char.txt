#include <stdio.h>
#include <math.h>
float superficie (float);

int main(void)
{
    float radio;
    char opcion;

    do{
        printf("Ingrese Radio: ");
        scanf("%f", &radio);

        printf("\nLa superficie es: %.2f", superficie(radio));

        printf("\n\nDesea seguir ingresando (s/n)?");
        fflush(stdin);
        opcion = getchar();
        while(!(opcion == 's' || opcion == 'n')){
            printf("\n\nTecla incorrecta!! (s/n)?");
            fflush(stdin);
            opcion = getchar();
        }
    }while(opcion == 's');

    printf("\n\n");
    return 0;
}

float superficie(float X){
    float res;
    res = M_PI * pow(X, 2);
    return res;
}
