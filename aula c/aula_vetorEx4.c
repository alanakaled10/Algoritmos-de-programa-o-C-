#include <stdio.h>
#include <stdlib.h>

int main(){
  
    int vetor[10];
    int tamanho =  sizeof(vetor) / sizeof(vetor[0]);
    float soma = 0;
    float media;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for (int j = 0; j < 10; j++)
    {
        soma += vetor[j];
    }

    media = soma / tamanho;

    for (int j = 0; j < 10; j++)
    {
        printf("%d \n",  vetor[j]);
    }

    printf("Soma -> %.0f\n", soma);
    printf("Media -> %.2f", media);
    
    
  return 0;  
}