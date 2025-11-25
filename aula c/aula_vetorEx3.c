#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%d - %d \n", j+1, vetor[j]);
    }
        

    return 0;
}