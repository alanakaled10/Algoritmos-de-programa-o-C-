/* Exercicio 43: Jogo da Forca Numerico*/

#include <stdio.h>

int main() {
    
    int senha[4] = {1, 9, 8, 4}; 
    int descoberto[4] = {0, 0, 0, 0}; 
    
    int tentativas = 5;
    int acertos_total = 0;
    int palpite, i, acertou_rodada;

    printf("--- FORCA NUMERICA ---\n");
    printf("Descubra a senha de 4 digitos.\n");

    while (tentativas > 0 && acertos_total < 4) {
        printf("\nSenha: ");
        
        
        for (i = 0; i < 4; i++) {
            if (descoberto[i]) {
                printf("%d ", senha[i]);
            } else {
                printf("_ ");
            }
        }

        printf("\nTentativas restantes: %d\n", tentativas);
        printf("Digite um numero (0-9): ");
        scanf("%d", &palpite);

        acertou_rodada = 0;

        for (i = 0; i < 4; i++) {
            if (senha[i] == palpite) {
                if (descoberto[i] == 0) {
                    descoberto[i] = 1; 
                    acertos_total++;
                    acertou_rodada = 1;
                }
            }
        }

        if (acertou_rodada) {
            printf("BOA! Voce encontrou um numero.\n");
        } else {
            printf("Errou! O numero %d nao esta na senha (ou ja foi dito).\n", palpite);
            tentativas--;
        }
    }

    printf("\n--- FIM DE JOGO ---\n");
    if (acertos_total == 4) {
        printf("PARABENS! A senha era %d%d%d%d\n", senha[0], senha[1], senha[2], senha[3]);
    } else {
        printf("GAME OVER. A senha era %d%d%d%d\n", senha[0], senha[1], senha[2], senha[3]);
    }

    return 0;
}