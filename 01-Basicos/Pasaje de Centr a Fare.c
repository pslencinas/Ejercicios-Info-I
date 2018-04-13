// pasaje de grados F a C
#include <stdio.h>

int main(void)
{
    float F, C;
    printf("Ingrese Temperatura en grados F: ");
    scanf("%f", &F);

    C = (float)5/9 * (F - 32);

    printf("Grados C: %f", C);

    printf("\n\n");
    return 0;
}
