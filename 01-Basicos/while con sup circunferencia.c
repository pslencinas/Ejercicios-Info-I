#include <stdio.h>
#include <math.h>
int main (void)
{
float radio, sup;
int i=0;

printf("Ingrese el Radio: ");
scanf("%f",&radio);
while(radio > 0)
{

   sup = M_PI * POW(radio, 2);
   printf("Superficie: %f", sup);
   i = i +1;
   printf("\n\nIngrese el Radio: ");
   scanf("%f", &radio);
}

printf("\n\nSe calcularon %d superficies", i);


return  0;

}

