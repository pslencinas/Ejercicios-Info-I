#include<stdio.h>
#include<math.h>

struct dato{
    float mod;
    float ang;
};
struct dato Convertir (float, float);

int main(void)
{
    struct dato X;
    float x, y;

    printf("Ingrese valor en X: ");
    scanf("%f", &x);
	printf("Ingrese valor en Y: ");
    scanf("%f", &y);

    X = Convertir(x,y);

    printf("\nEl modulo es: %f", X.mod);
    printf("\nEl angulo es: %f", X.ang);


    printf("\n\n");
    return 0;

}

struct dato Convertir(float x, float y){

    struct dato Resul;
	Resul.mod = sqrt(x*x + y*y);
	Resul.ang = atan(y/x);

    return Resul;
}




