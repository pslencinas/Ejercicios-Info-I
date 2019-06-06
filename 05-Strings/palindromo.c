#include <stdio.h>

int main(void)
{

    char A[20];
    int i=0, largo=0, cont=0;
    printf("Ingrese una palabra: ");
    gets(A);
    largo = strlen(A);
    printf("Largo de la palabra: %d", largo);
    for(i=0; i<largo/2; i++){
        if(A[i] == A[largo-1-i]){
            cont++;
        }
    }

    if(cont == largo/2)
        printf("\nEs palindromo");

    printf("\n\n");
    return 0;
}
