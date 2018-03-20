#include <stdio.h>
#include <stdlib.h>

#define N 100

struct datos{
  int legajo, p1, p2;
  float prom;
  char ape[31], nom1[21], nom2[21], promociona;
};

int main( void)
{
  struct datos CURSO[N];
  char opcion;
  int i=0, k=0;
  
  do{
    fflush(stdin);
    printf("Legajo: ");
    scanf("%d", &CURSO[i].legajo);
    
    printf("Apellido: ");
    fflush(stdin);
    gets(CURSO[i].ape);
    printf("1er Nombre: ");
    fflush(stdin);
    gets(CURSO[i].nom1);
    printf("2do Nombre: ");
    fflush(stdin);
    gets(CURSO[i].nom2);
    printf("Nota 1er Parcial: ");
    scanf("%d", &CURSO[i].p1);
    printf("Nota 2do Parcial: ");
    scanf("%d", &CURSO[i].p2);
    
    CURSO[i].prom = (float)(CURSO[i].p1 + CURSO[i].p2) / 2;
    if(CURSO[i].prom >= 7 ){
      CURSO[i].promociona = 'S';
    }else{
      CURSO[i].promociona = 'N';
    }
    
    
    i++;
    printf("Sigo cargando?: (s/n)");
    fflush(stdin);
    opcion = getchar();
  }while(opcion == 's');
  
  
  for(k=0; k<i; k++){

        printf("\n%d \t %s \t %s \t %s \t %d \t %d \t %f \t %c", CURSO[k].legajo, CURSO[k].ape, 
        CURSO[k].nom1, CURSO[k].nom2, CURSO[k].p1, CURSO[k].p2, CURSO[k].prom, CURSO[k].promociona);
    }


    printf("\n\n");
}
