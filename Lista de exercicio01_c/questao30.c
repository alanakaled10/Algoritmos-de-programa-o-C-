/*Sistema de Pontuação*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    int pontFinal=100;
    int numTentativas=0;
    int numSecreto, num;

    srand(time(NULL));
    numSecreto = rand() % 100 + 1;
    
    printf("====JOGO DE ADIVINHA====\n");
    printf("-> Voce esta com 100 pontos. \n-> A cada numero errado, voce perdera um ponto.\n");
    printf("\n-------- VAMOS COMECAR! -------- \nDigite um numero: ");
    scanf("%d", &num);

    
    while (num != numSecreto)
    {
        if (num<numSecreto)
        {
            printf("\n---Muito baixo! Chute um numero mais alto---\n");
            scanf("%d", &num);
        }else if (num>numSecreto)
        {
            printf("\n---Muito alto! Chute um numero mais baixo---\n");
            scanf("%d", &num);
        }

        pontFinal--;
        numTentativas++;
    }

    printf("\n====== PARABENS! ====== \nVoce acertou! O numero secreto e: %d \n-----Pontos Finais: %d----- \n-----Numero de tentativas: %d-----", numSecreto, pontFinal, numTentativas);
    

    return 0;
}