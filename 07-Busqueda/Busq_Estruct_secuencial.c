#include<stdio.h>
#define cantidad 5

struct info
{
char nombre[20];
char apellido[20];
int edad;
unsigned int dni;

};
struct info ARCHIVOS[cantidad];
int main(void)
{

int i;
unsigned int aux_dni;
/* Lazo para la entrada de datos */
for(i=0;i<cantidad;i++)
{
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(ARCHIVOS[i].nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(ARCHIVOS[i].apellido);
    printf("Ingrese edad: ");
    fflush(stdin);
    scanf("%d", &ARCHIVOS[i].edad);
    printf("Ingrese DNI (sin puntos): ");
    fflush(stdin);
    scanf("%ud", &ARCHIVOS[i].dni);

}

printf("\n\nIngrese DNI a buscar: ");
scanf("%ud", &aux_dni);

for(i=0; i<cantidad; i++)
{
    if(ARCHIVOS[i].dni == aux_dni)
    {	break;
    }
}

if(i == cantidad)
    printf("\nNo hay registros para ese DNI ingresado!!!");
else
    printf("\nNombre: %5s\t Apellido: %5s\t Edad: %5d",
    ARCHIVOS[i].nombre, ARCHIVOS[i].apellido, ARCHIVOS[i].edad);


printf("\n\n");
return 0;
}
