#include <stdio.h>
#define CANT 10

int main(void)
{
    int POS[CANT], NEG[CANT];
    int i=0, p=0, n=0, NUM;

    for(i=0: i<10; i++)
    {
    printf("Ingrese Nro:\t");
    scanf("%d", &NUM);
    
    if(NUM>0)
        {
            POS[p]=NUM;
            p++;
        }
        else
        {
            NEG[n]=NUM;
            n++;
        }

    }
    
}

    for(i=0; i<p; i++ )
        printf("%5d", POS[i]);

    printf("\n\n");

    for(i=0; i<n; i++ )
        printf("%5d", NEG[i]);

printf("\n\n");
return 0;
}
