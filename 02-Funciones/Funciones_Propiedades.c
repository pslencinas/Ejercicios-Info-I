#include <stdio.h>
float valor(float mts, int hab, char pil);
int main(void)
{
    float mts, res, mtsMax=0, valorMax, acum=0;
    int hab, cont=0, contHab=0;
    char c, pil;
    do{
        printf("Ingrese mts2: ");
        scanf("%f", &mts);
        printf("Ingrese cantidad de Hab: ");
        scanf("%d", &hab);
        printf("Tiene pileta (s/n): ");
        fflush(stdin);
        pil = getchar();
        res = valor(mts, hab, pil);

        cont ++;            //punto 1
        if(mts > mtsMax)    //punto 2
            valorMax = res;

        acum = acum + res;  //punto 3
        if (hab >= 3)       //punto 4
            contHab++;
        printf("\n\nQuiere seguir ingresando (s/n): ");
        fflush(stdin);
        c = getchar();
    }while(c == 's');

    printf("\nTotal de ingresos: %d", cont);
    printf("\nPropiedad mas grande vale: %.2f", valorMax);
    printf("\nPromedio de valores: %.2f", acum/cont);
    printf("\nPorc con mas de 3 Hab: %.2f", (float)contHab/cont*100);
    printf("\n\n");

    return 0;
}


float valor(float m, int h, char p)
{
    float valor;
    if(p == 's'){
        valor = 100 * m + 100 * h + 500;
    }else{
        valor = 100 * m + 100 * h;
    }
    return valor;
}

