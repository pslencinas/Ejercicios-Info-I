// Program que pide el ingreso del año de
// nacimiento de una persona y calcule
// en que año educativo se encuentra
#include <stdio.h>

int main(void)
{
    int nacimiento, edad;
    printf("Ingrese año de nacimiento:");
    scanf("%d", &nacimiento);

    edad = 2018 - nacimiento;
    
    printf("Tiene %d años\n", edad);
    if(edad < 6)
        printf("Se encuentra en Jardin");
    else
        if (edad < 12)
            printf("Se encuentra en Primaria");
        else
            if (edad < 18)
                printf("Se encuentra en Secundaria");
            else
                printf("Se encuentra en la Universidad");

    printf("\n\n");
    return 0;
}

