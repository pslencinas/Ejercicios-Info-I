#include <stdio.h>
int main(void)
{
int A[5],i;

//CARGA DEL VECTOR
for(i=0; i<10; i++)
{
    printf("Ingrese dato:\t");
    scanf("%d", &A[i]);
}

//IMPRESION DEL VECTOR
for(i=0; i<10; i++)
{
    printf("%d\t", A[i]);
}

return 0;
}
