#include <stdio.h>
#include <math.h>

#define TAM 11

int main (void)
{
    int V1[TAM], V2[TAM], i;
    float V3[TAM];

    for(i=1; i<TAM; i++){
        V1[i]=i;
        V2[i]=i*i;
        V3[i]=sqrt(i);
    }

    printf("V1 \t V2 \t V3");

    for(i=1; i<TAM; i++){
        printf("\n%d \t %d \t %.2f", V1[i],V2[i],V3[i]);
    }
    printf("\n\n");
    return 0;
}

