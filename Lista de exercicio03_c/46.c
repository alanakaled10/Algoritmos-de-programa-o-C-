/* Exercicio 46: Jogo 21 (Blackjack Simplificado)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int puxar_carta() {
 
    return (rand() % 10) + 1;
}

int main() {
    int soma_jogador = 0, soma_pc = 0;
    int carta;
    char escolha;
    
    srand(time(NULL));

    printf("--- BLACKJACK 21 (Simplificado) ---\n");


    printf("\nSEU TURNO:\n");
    

    soma_jogador += puxar_carta();
    soma_jogador += puxar_carta();
    
    do {
        printf("Voce tem: %d pontos\n", soma_jogador);
        
        if (soma_jogador > 21) {
            printf("ESTOUROU! Voce passou de 21.\n");
            break; 
        }
        
        printf("Deseja puxar mais uma carta (s/n)? ");
        scanf(" %c", &escolha); 

        if (escolha == 's' || escolha == 'S') {
            carta = puxar_carta();
            printf("Voce puxou um %d.\n", carta);
            soma_jogador += carta;
        }

    } while ((escolha == 's' || escolha == 'S') && soma_jogador <= 21);


    if (soma_jogador > 21) {
        printf("\nRESULTADO: BANCA VENCEU (Voce estourou)!\n");
        return 0;
    }

    printf("\nTURNO DA BANCA (Computador):\n");
 
    while (soma_pc < 17) {
        carta = puxar_carta();
        soma_pc += carta;
        printf("Banca puxou %d. Total Banca: %d\n", carta, soma_pc);
    }

 
    printf("\n--- PLACAR FINAL ---\n");
    printf("Voce: %d  x  Banca: %d\n", soma_jogador, soma_pc);

    if (soma_pc > 21) {
        printf("RESULTADO: VOCE VENCEU! (Banca estourou)\n");
    } else if (soma_jogador > soma_pc) {
        printf("RESULTADO: VOCE VENCEU! (Pontuacao maior)\n");
    } else if (soma_pc > soma_jogador) {
        printf("RESULTADO: BANCA VENCEU!\n");
    } else {
        printf("RESULTADO: EMPATE (Push)!\n");
    }

    return 0;
}