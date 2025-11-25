/*Jogo de Adivinhação Melhorado*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, numUsuario, contador = 1;

    srand(time(NULL));

    num = rand() % 100+1;

    printf("======= JOGO DE ADIVINHACAO =======\n");
    printf("Digite um numero de 1-100: ");
    scanf("%d", &numUsuario);

    while (numUsuario<1 || numUsuario>100)
    {
        printf("Numero invalido! \nDigite um numero de 1-100: ");
        scanf("%d", &numUsuario);
    }

    while (numUsuario != num)
    {
        if (num > numUsuario)
        {
            printf("Chute um numero mais alto: ");
            scanf("%d", &numUsuario);
        }
        else
        {
            printf("Chute um numero mais baixo: ");
            scanf("%d", &numUsuario);
        }
        contador ++;
    }
    
    printf("\nVOCE ACERTOU!\n");
    printf("_Numero: %d", num);
    printf("\n_Tentativas: %d", contador);

    return 0;
}