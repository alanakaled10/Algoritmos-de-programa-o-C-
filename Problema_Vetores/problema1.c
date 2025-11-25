/*Sistema de votação*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int votos[5];
    int total = 0;
    int ganhador[2] = {0};

    printf("Digite os votos de cada candidato:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("candidato %d: ", i+1);
        scanf("%d", &votos[i]);
    }

    system("cls");

    for (int i = 0; i < 5; i++)
    {
        total += votos[i];
        
        if (votos[i] > ganhador[0])
        {
            ganhador[0] = votos[i];
            ganhador[1] = i+1;
        }   
    }
    
    printf("_Total de votos: %d\n", total);
    printf("\n_Vencedor: Candidato %d com %d votos", ganhador[1], ganhador[0]);
}