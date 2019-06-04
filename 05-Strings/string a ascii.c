#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[21];
    int i, largo;
    fflush(stdin);
    printf("Ingrese String:\t");
    gets(a);
    largo = strlen(a);
    for(i=0; i<largo; i++)
        printf("%d\t", a[i]);

    printf("\n\n");
    return 0;
}
