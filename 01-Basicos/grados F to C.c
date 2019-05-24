#include <stdio.h>
int main(void)
{
    float C,F;
    printf("Ingrese Temperatura en F: ");
    scanf("%f", &F);
    C = (float)5/9*(F-32);
    printf("Grados C: %.2f", C);
    printf("\n\n");

    return 0;
}

