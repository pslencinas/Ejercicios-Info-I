#include <stdio.h>

int main(void)
{

    char letra;

    printf("Ingrese una letra (* para salir): ");
    letra = getchar();

    while(letra != 42){
        printf("\nTecla ingresada: %c", letra);
        printf("\nCodigo ASCII: %d", letra);

        printf("\n\nIngrese una letra (* para salir): ");
        fflush(stdin);
        letra = getchar();
    }
    printf("\n\n");
    return 0;
}
