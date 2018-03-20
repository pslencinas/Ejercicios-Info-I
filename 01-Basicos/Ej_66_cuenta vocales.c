/*Ej 66
*/

#include <stdio.h>
int main (void)

{
int vocales=0;
char letra;

do{
    printf("letra: ");
    fflush(stdin);
    letra = getchar();

    if(letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u')
        vocales ++;
} while(letra != '#');

printf ("\n\n");
printf ("Cantidad de vocales ingresadas: %d",vocales);
printf ("\n\n\n");

return 0;
}


