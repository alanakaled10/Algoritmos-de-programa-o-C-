#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[5], salva;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
        system("cls"); 
    }
    printf("======= VETOR DESORDENADO =======\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ", vetor[j]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetor[i] < vetor [j])
            {
                salva = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = salva;
            }
            
        }
        
    }
    
    printf("\n\n======= VETOR ORDENADO =======\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ", vetor[j]);
    }

    return 0;
}