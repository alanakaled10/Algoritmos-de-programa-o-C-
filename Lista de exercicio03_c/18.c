/*Jogo Par ou Ímpar*/

#include <stdio.h>
#include <stdlib.h> // Para a função rand() e srand()
#include <time.h>   // Para inicializar o gerador de números aleatórios

int main(){

    int numPrograma, numPar, opcao;
    char jogar;

    do
    {
        printf("Escolha (0)Par ou (1)Impar: ");
        scanf("%d", &opcao);
        while (opcao!=0 && opcao!=1 )
        {
            printf("Opcao invalida! \nEscolha (0)Par ou (1)Impar: ");
            scanf("%d", &opcao);
            
        }

        srand(time(NULL));
        numPrograma = rand() % 10+1;

        numPar =(numPrograma%2==0);

        if ((numPar && opcao ==  0) || (!numPar && opcao == 1 ))
        {
            printf("\n***** PARABENS VOCE GANHOU *****\n");
            printf("O numero e: %d (%s)", numPrograma, numPar? "par" : "Impar");
        }
        else
        {
            printf("VOCE PERDEU. \nO numero e: %d (%s)", numPrograma, numPar? "par" : "Impar");
        }
        
        
        printf("\nDeseja Jogar novamente? (s/n)");
        while (getchar() != '\n');
        scanf("%c", &jogar);
        
        
        
        
    } while (jogar == 's' || jogar== 'S');

    printf("\nObrigada por jogar!\nSAINDO.....");
    

    return 0;
}