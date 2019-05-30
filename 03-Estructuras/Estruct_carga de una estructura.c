#include<stdio.h>

struct info_archivo
{
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo;

};

int main(void)
{

    struct info_archivo X;
    int i;

    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(X.nombre);
    printf("\nIngrese apellido: ");
    fflush(stdin);
    gets(X.apellido);
    printf("Ingrese edad: ");
    scanf("%d", &X.edad);
    printf("Ingrese sexo (m/f): ");
    fflush(stdin);
    X.sexo = getchar()


    printf("\nNombre: %s\t Apellido: %s\t Edad: %d\t Sexo: %c",
        X.nombre, X.apellido, X.edad, X.sexo);

    
printf("\n\n");
return 0;
}
