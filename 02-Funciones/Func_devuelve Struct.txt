#include<stdio.h>
#include<math.h>

#define CANTIDAD 3
#define PROM 2

struct dato
{
    int cuadrado;
    int cubo;
    float raiz;
    float inv;
};

struct dato FuncStruct (int);

int main(void)
{

    struct dato X;
    int n;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    X = FuncStruct(n);

    printf("\nEl cuadrado es: %d", X.cuadrado);
    printf("\nEl cubo es: %d", X.cubo);
    printf("\nLa raiz es: %f", X.raiz);
    printf("\nLa inversa es: %f", X.inv);


    printf("\n\n");
    return 0;

}

struct dato FuncStruct(int a){

    struct dato Y;

    Y.cuadrado = a * a;
    Y.cubo = a * a * a;
    Y.raiz = sqrt(a);
    Y.inv = (float) 1/a;

    return Y;
}




