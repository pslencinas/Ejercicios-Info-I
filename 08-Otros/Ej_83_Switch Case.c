/* Eje. 83 Ingreso de Vocal e infomar, con swith case */

#include <stdio.h>

int main(void)
{
    char letra;
    int flag=0;

    printf("Ingrese Letra: ");
    scanf("%c", &letra);

    switch(letra)
    {
        case 'a':
        {   flag = 1;
            break;
        }
        case 'e':
        {
            flag = 1;
            break;
        }
        case 'i':
        {   flag = 1;
            break;
        }
        case 'o':
        {
            flag = 1;
            break;
        }
        case 'u':
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Letra ingresada es Vocal");
    else
        printf("Letra ingresada NO es Vocal");

    printf("\n\n");
    return 0;
}
