#include <stdio.h>

int main(void)
{
    int A, B, C;
    printf("Ingrese A:\t");
    scanf("%d", &A);
    printf("Ingrese B:\t");
    scanf("%d", &B);
    printf("Ingrese C:\t");
    scanf("%d", &C);

    if(A==B)
        if(B==C)
            printf("EQUILATERO");
        else
            printf("ISOSCELES");
    else if(B==C)
                printf("ISOSCELES");
         else if(C==A)
                        printf("ISOSCELES");
              else
                        printf("ESCALENO");

    printf("\n\n");
    return 0;
}

