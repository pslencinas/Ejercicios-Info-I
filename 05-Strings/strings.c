#include <stdio.h>

int main(void)
{
    char a[21], b[21], c[21]={"Ejemplo de String"};

    fflush(stdin);
    printf("Ingrese String 1:\t");
    scanf("%s", a);

    fflush(stdin);
    printf("Ingrese String 2:\t");
    gets(b);

    puts(a);
    puts(c);
    printf("%s  %s  %s", a, b, c);

    printf("\n\n");
    return 0;
}