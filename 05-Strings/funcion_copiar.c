#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiastr (char *, char *);

int main(void)
{
    char frase1[10], frase2[10];

    printf("Frase 1: ");
    gets(frase1);

    copiastr(frase2, frase1);   //destino, origen

    printf("\n\nFrase 1: %s", frase1);
    printf("\n\nFrase 2: %s", frase2);
    getchar();
    printf("\n\n");
    return 0;
}

void copiastr(char * destino, char * origen){

    unsigned int i;

    for(i=0; i<strlen(origen); i++){
        destino[i] = origen[i];
    }
    destino[i] = '\0';

}
