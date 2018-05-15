#include<stdio.h>
#define cantidad 3

struct info_archivo
{
char nombre[20];
int extension;
char permisos[15];

};
struct info_archivo ARCHIVOS[cantidad];
int main(void)
{

int i;
/* Lazo para la entrada de datos */
for(i=0;i<cantidad;i++)
{
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(ARCHIVOS[i].nombre);
    printf("Ingrese extension: ");
    fflush(stdin);
    scanf("%d", &ARCHIVOS[i].extension);
    printf("Ingrese permisos de discado: ");
    fflush(stdin);
    gets(ARCHIVOS[i].permisos);

}
/* Lazo para la presentación de datos */

for(i=0;i<cantidad;i++)
{
    printf("\nNombre: %5s\t Extension: %5d\t Permisos: %5s",
    ARCHIVOS[i].nombre, ARCHIVOS[i].extension, ARCHIVOS[i].permisos);

}



printf("\n\n");
return 0;
}
