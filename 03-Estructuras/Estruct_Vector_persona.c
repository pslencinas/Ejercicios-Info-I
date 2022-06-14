#include <stdio.h>n

struct persona{
    char sexo, maneja, registro;
    int edad;
    float altura;
};

int main()
{
    struct persona X[5];
    int i;
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese edad: ");
        scanf("%d", &X[i].edad);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &X[i].sexo);
        printf("Maneja (s/n): ");
        fflush(stdin);
        scanf("%c", &X[i].maneja);
        printf("Ingrese altura: ");
        scanf("%f", &X[i].altura);
    
        if (X[i].edad >= 17 && X[i].maneja == 's'){
            X[i].registro = 's';
        }else{
            X[i].registro = 'n';
        }
    }

    for(i=0; i<5; i++)
    {
        printf("\n%d \t %c \t %c \t %.2f",
            X[i].edad, X[i].sexo, X[i].maneja, X[i].altura);
        printf("\nHabilitado para registro: %c", X[i].registro);
    }
    printf("\n\n");
    return 0;
}
