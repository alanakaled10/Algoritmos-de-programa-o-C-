#include <stdio.h>
#include <stdlib.h>

int main(){
  
    int vetor[15];
    int par = 0, multiplo5 = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for (int j = 0; j < 15; j++)
    {
        if (vetor[j]%2 == 0)
        {
            par++;
        }
        if (vetor[j] % 5 == 0)
        {
            multiplo5++;
        }
        
        
    }

    printf("======= VETOR ======= \n");
    for (int j = 0; j < 15; j++)
    {
        printf("%d ",  vetor[j]);
    }

    printf("\nQuantidade de numeros Pares -> %d", par);
    printf("\nQuantidade de numeros Multiplo de 5 -> %d", multiplo5);
    
    
  return 0;  
}