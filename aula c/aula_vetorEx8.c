#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  
    int vetor[4];
    int maiorValor;

    for (int i = 0; i < 4; i++)
    {
        printf("numero: ");
        scanf("%d", &vetor[i]);
    }

    maiorValor = vetor[0] - vetor[1];

    for (int i = 0; i < 4; i++)
    {
        if (maiorValor < fabs(vetor[i] - vetor[i+1]) )
        {
            maiorValor = vetor[i] - vetor[i+1];
        }
        
        
    }
    
    
    
  return 0;  
}