#include <stdio.h>

int main() {
    int pontos[8];
    int id_jogadores[8];
    int i, j, temp_pt, temp_id;

    printf("=== Problema 10: Ranking ===\n");
    
    for(i = 0; i < 8; i++) {
        id_jogadores[i] = i + 1;

        do {
            printf("Pontuacao do Jogador %d: ", id_jogadores[i]);
            scanf("%d", &pontos[i]);

            if (pontos[i] < 0)
                printf("Pontuacao invalida! Digite um valor >= 0.\n");

        } while (pontos[i] < 0);
    }

    for(i = 0; i < 8 - 1; i++) {
        for(j = 0; j < 8 - 1 - i; j++) {
            if(pontos[j] < pontos[j+1]) {

       
                temp_pt = pontos[j];
                pontos[j] = pontos[j+1];
                pontos[j+1] = temp_pt;

         
                temp_id = id_jogadores[j];
                id_jogadores[j] = id_jogadores[j+1];
                id_jogadores[j+1] = temp_id;
            }
        }
    }


    printf("\n=== RANKING FINAL ===\n");

    printf("1o Lugar: Jogador %d com %d pts (CAMPEAO)\n",
            id_jogadores[0], pontos[0]);
    printf("2o Lugar: Jogador %d com %d pts\n",
            id_jogadores[1], pontos[1]);
    printf("3o Lugar: Jogador %d com %d pts\n",
            id_jogadores[2], pontos[2]);

    printf("\n--- Verificando Empates ---\n");
    int houveEmpate = 0;
    for(i = 0; i < 7; i++) {
        if(pontos[i] == pontos[i+1]) {
            printf("Empate entre jogador %d e jogador %d (%d pts)\n",
                   id_jogadores[i], id_jogadores[i+1], pontos[i]);
            houveEmpate = 1;
        }
    }
    if(!houveEmpate) {
        printf("Nenhum empate encontrado.\n");
    }


    printf("\n--- Restante ---\n");
    for(i = 3; i < 8; i++) {
        printf("%do Lugar: Jogador %d com %d pts\n",
               i+1, id_jogadores[i], pontos[i]);
    }

    
    printf("\nDiferenca do 1o para o ultimo: %d pontos\n",
           pontos[0] - pontos[7]);

    return 0;
}
