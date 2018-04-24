#include <stdio.h>
int triangulo(float x, float y, float z);

int main(void)
{
    float A, B, C;
    int opcion;

    printf("Ingrese los 3 lados de un Triangulo: \n\n");
    printf("Lado A: ");
    scanf("%f",&A);
    printf("Lado B: ");
    scanf("%f",&B);
    printf("Lado C: ");
    scanf("%f",&C);

    opcion = triangulo(A,B,C);

    if(opcion == 1)
        printf("\nEQUILATERO");
    else if(opcion == 2)
        printf("\nISOSCELES");
        else if(opcion == 3)
            printf("\nESCALENO");
            else if(opcion == -1)
                printf("\nVALOR INCORRECTO");

    printf("\n\n");
    return 0;
}

int triangulo(float x, float y, float z){

    if(x == 0 && y == 0 && z == 0)
        return -1;

    if( x>(y+z) || y>(z+x) || z>(x+y) )
        return -1;

    if((x == y) && (y == z)){
        return 1;
    }else{
        if((x == y)||(y==z)||(z==x)){
            return 2;
        }else{
            return 3;
        }
    }

}
