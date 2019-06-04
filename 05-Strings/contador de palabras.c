#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    int i, largo, cont=0;
    fflush(stdin);
    printf("Ingrese una frase: ");
    gets(a);

    largo = strlen(a);
    for(i=0; i<largo; i++)
        if(a[i] == 32){
            cont++;
        }

    printf("La frase tiene %d palabras", cont+1);
    printf("\n\n");
    return 0;
}
