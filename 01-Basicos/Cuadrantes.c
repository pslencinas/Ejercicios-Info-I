/*
Ingresar pares de valores no nulos X e Y,
que representan las coordenadas rectangulares de distintos
puntos en el plano, y determinar e informar:
a)	Cantidad de puntos que pertenecen a cada cuadrante.
b)	Sumatoria de las distancias al origen de los puntos
pertenecientes al primer cuadrante.
El fin de datos se indica con X e Y iguales a cero.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int priCuad=0, segCuad=0, terCuad=0, cuaCuad=0;
    float X, Y, acum=0;

    printf("Ingrese valor en X: ");
    scanf("%f", &X);
    printf("Ingrese valor en Y: ");
    scanf("%f", &Y);

    while(X!=0 || Y!=0)
    {
        if(X>=0 && Y>=0){
            priCuad++;
            acum = acum + sqrt(pow(X,2) + pow(Y,2));
        }
        if(X<=0 && Y>=0)
            segCuad++;
        if(X<=0 && Y<=0)
            terCuad++;
        if(X>=0 && Y<=0)
            cuaCuad++;

        printf("\nIngrese valor en X: ");
        scanf("%f", &X);
        printf("Ingrese valor en Y: ");
        scanf("%f", &Y);

    }

    printf("\nPuntos en el 1er Cuadrante: %d\n", priCuad);
    printf("Puntos en el 2do Cuadrante: %d\n", segCuad);
    printf("Puntos en el 3er Cuadrante: %d\n", terCuad);
    printf("Puntos en el 4to Cuadrante: %d\n", cuaCuad);
    printf("Sumatoria de distancia 1er Cuad: %f\n", acum);
    return 0;
}
