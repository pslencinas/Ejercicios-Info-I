//Ejercicio 34 de la Guía.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float Temp,Temp_Mayor=0,Temp_Menor=0;
    int i;

    for(i=1; i<31; i++)
    {
        printf("ingrese tempetatura del dia %d: ",i);
        scanf("%f",&Temp);

        if(i==1){					//lo hago solo la primera vez para
            Temp_Mayor = Temp;		//cargar el primer ingreso como
            Temp_Menor = Temp;		//Mayor y Menor a la vez
        }else{
            if(Temp>Temp_Mayor)
            {
                Temp_Mayor=Temp;
            }
            else if(Temp<Temp_Menor)
            {
                Temp_Menor=Temp;
            }
        }

    }
    printf("\n\nLa temperatura mayor fue de: %.2f\n",Temp_Mayor);
    printf("\n\nLa temperatura menor fue de: %.2f\n",Temp_Menor);


    return 0;
}

