#include<string.h>
#include<stdio.h>
#include<stdlib.h>


#define fila 5
#define col 10


int main(void)
{
    char MATRIZ[fila][col];
    int i=0, k=0, flag=0;
    char L;

    //se ingresa la matriz

    for(i=0; i<fila ;i++)
    {
        printf("ingrese la palabra: ");
        gets( MATRIZ[i]);
    }

    //se pide ingresar la letra a comparar
    printf("\n\nIngrese la letra a buscar:  ");
    scanf("%c", &L);

    //se busca la palabra

    for(i=0;i<fila;i++)
    {
        for(k=0; k<col; k++){

            if(flag){
                if(MATRIZ[i][k] == (char)0){

                    break;
                }else{
                    printf("%c", MATRIZ[i][k]);
                }

            }else{  //entro si no tengo coincidencia
                if(L == MATRIZ[i][k]){
                    printf("%c", MATRIZ[i][k]);
                    flag = 1;
                }
            }


        }
        printf("\n");
        flag=0;

    }

    printf("\n");
    system("pause");
    return 0;
}

