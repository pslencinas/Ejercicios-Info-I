#include<stdio.h>
#include<math.h>

struct dato
{
    float cua, cubo, raiz;
};

struct dato Buscar (float);

int main(void)
{
    struct dato Z;
    float a;

    printf("Ingrese valor: ");
    scanf("%f", &a);

    Z = Buscar(a);

    printf("\n%.2f \t%.2f \t%.2f ", Z.cua, Z.cubo, Z.raiz);

    printf("\n\n");
    return 0;
}

struct dato Buscar(float x){

    struct dato Resul;
    Resul.cua = x*x;
    Resul.cubo = pow(x,3);
    Resul.raiz = sqrt(x);

    return Resul;
}




