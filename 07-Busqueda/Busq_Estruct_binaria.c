#include<stdio.h>
#define N 5

struct info
{
  char nombre[20];
  int edad;
  unsigned int dni;

};
struct info ARCHIVOS[N], aux;
int main(void)
{

    int i, j, inf=0, sup = N-1, medio;
    unsigned int bus_dni;
    
    /* Lazo para la entrada de datos */
    for(i=0;i<N;i++)
    {
        printf("\nIngrese nombre: ");
        __fpurge(stdin);//fflush(stdin);
        gets(ARCHIVOS[i].nombre);
        printf("Ingrese edad: ");
        scanf("%d", &ARCHIVOS[i].edad);
        printf("Ingrese DNI (sin puntos): ");
        scanf("%ud", &ARCHIVOS[i].dni);

    }

    for (i=0; i<N-1; i++)           //vueltas de referencias
        for (j=i+1; j<N; j++)       //comparaciones
            if (ARCHIVOS[i].dni > ARCHIVOS[j].dni)
            {
                aux=ARCHIVOS[i];         //swapping
                ARCHIVOS[i]=ARCHIVOS[j];      //intercambio
                ARCHIVOS[j]=aux;
            }
            

    printf("\n\nIngrese DNI a buscar: ");
    scanf("%ud", &bus_dni);

    medio = (inf + sup) / 2;
    
    while(bus_dni != ARCHIVOS[medio].dni && sup>inf){
        
        if(bus_dni > ARCHIVOS[medio].dni)
            inf = medio + 1;
        else
            sup = medio - 1;
        
        medio = (inf + sup) / 2;
        
    }

    if(bus_dni == ARCHIVOS[medio].dni)
        printf("\nNombre: %5s\t Edad: %5d",
        ARCHIVOS[medio].nombre, ARCHIVOS[medio].edad);
    else
        printf("\nNo hay registros para ese DNI ingresado!!!");

    printf("\n\n");
    return 0;
}
