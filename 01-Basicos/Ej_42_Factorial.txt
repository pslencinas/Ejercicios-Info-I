/* Eje. 42 Factorial*/

#include <stdio.h>

int main(void)
{
    int i, dato, fact=1;

    printf("Ingrese numero a factoriar: ");
    scanf("%d",&dato);
    while(dato!=0){
        if(dato > 0){
            for(i=1; i<=dato; i++){
                fact = fact * i;
            }   //fin del for
            printf("Factorial de %d es: %d",dato, fact);
        }else{
            printf("Numero Negativo, ingrese otro numero.");
        }
        fact = 1;
        printf("\n\nIngrese numero a factoriar: ");
        scanf("%d",&dato);
    }
    printf("Fin del programa. Ha ingresado un cero(0)...");
    printf("\n\n");
    return 0;

}
