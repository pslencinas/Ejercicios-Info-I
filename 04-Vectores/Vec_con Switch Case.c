//Ej. 88

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Menu(void);

int main(void)
{
    int num[10],opcion,i,j,aux;

    Menu();
    scanf("%d",&opcion);


    while (opcion != 3){
        switch (opcion)
        {

        case 1:
        {
             for(i=0;i<10;i++)
             {
                 printf("Ingrese el valor %d: ",i);

                 scanf("%d",&num[i]);
                 fflush(stdin);
             }
             printf("\n\nVector Cargado!!!\n\n");
             system("PAUSE");
             break;
        }

        case 2:
        {
            for(i=0;i<10-1;i++){
                for(j=i+1;j<10;j++)
                {
                     if(num[i]<num[j])
                     {
                         aux=num[i];
                         num[i]=num[j];
                         num[j]=aux;
                     }
                }
            }

            for(i=0;i<10;i++)
            {
                printf("\nValor %d ",num[i]);

            }
            printf("\n\nVector Ordenado!!\n\n");
            system("PAUSE");
            break;
        }
        case 3:
        {
            break;
        }

        }

        Menu();
        scanf("%d",&opcion);
    }

    return 0;
}

void Menu(void){
    system("cls");
    printf("1- Cargar vector.\n");
    printf("2- Ordenar y mostrar vector.\n");
    printf("3- Salir\n\n");
    printf("Ingrese opcion: ");

}
