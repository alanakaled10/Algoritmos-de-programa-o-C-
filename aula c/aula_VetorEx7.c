#include <stdio.h>
#include <stdlib.h>

int main(){
  
    float vetor[4];
    float divisao;
    int menor, posicao=0;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &vetor[i]);
        system("cls");
    }
    menor = vetor[0];

    for (int j = 0; j < 4; j++)
    {
        
        if (menor > vetor[j])
        {
            menor = vetor[j];
            posicao = j;
        }   
  
    }
    printf("Menor numero: %d\n", menor);
    printf("Posicao menor numero: %d\n", posicao);
    printf("======= VETOR ATUALIZADO ======= \n");

    for (int j = 0; j < 4; j++)
    {
        divisao = vetor[j]/menor;
        printf("%.2f ", divisao);
    }
    
    
  return 0;  
}