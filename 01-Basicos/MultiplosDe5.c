// Programa que muestra los multiplos de 5 hasta el 100
// Informa los valores y la suma

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iSum=0, iNum=0;

    for(iNum=5;iNum<=100;iNum+=5){
        printf("_%d",iNum);
        iSum+=iNum; //iSum = iSum + iNum;
    }

    /*
    iNum+=5;
    while(iNum<=100){
        printf("_%d",iNum);
        iSum+=iNum; //iSum = iSum + iNum;
        iNum+=5; //iNum = iNum + 5;
    }*/


    printf("\n\nLa suma de los multiplos es: %d", iSum);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
