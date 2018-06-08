#include <stdio.h>
#define CANT 1000

int main(void)
{
    int POS[CANT], NEG[CANT];
    int i=0, p=0, n=0, NUM;

    printf("Ingrese Nro:\t");
    scanf("%d", &NUM);
    while(NUM!=0 && i<CANT){
      if(NUM>0){
          POS[p]=NUM;
          p++;
      }
      else{
          NEG[n]=NUM;
          n++;
      }
      i++;
      printf("Ingrese Nro:\t");
      scanf("%d", &NUM);
    }

    if(p > n){
      for(i=0; i<p; i++ )
          printf("\n%5d", POS[i]);
      printf("\n\n");
      for(i=0; i<n; i++ )
          printf("\n%5d", NEG[i]);
          
    }else 
      if( p < n){
        for(i=0; i<n; i++ )
          printf("\n%5d", NEG[i]);
        printf("\n\n");
        for(i=0; i<p; i++ )
          printf("\n%5d", POS[i]);
          
      }else{
        for(i=0; i<p; i++ )
          printf("\n%5d \t %5d", POS[i], NEG[i]);
        
      }
    
    
printf("\n\n");
return 0;
}
