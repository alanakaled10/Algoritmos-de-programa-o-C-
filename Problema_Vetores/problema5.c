/*Sistema de Senhas Bancárias*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int senhas[20];
    int opcao;
    int senha_atual = -1;

    for (int i = 0; i < 20; i++)
        senhas[i] = 0;

    do {
        printf("\n=== SISTEMA DE SENHAS ===\n");
        printf("1 - Chamar proxima senha\n");
        printf("2 - Marcar atual como atendida\n");
        printf("3 - Ver fila\n");
        printf("4 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        int encontrou = 0;

        switch (opcao) {

        case 1:
            for (int i = 0; i < 20; i++) {
                if (senhas[i] == 0) {
                    senhas[i] = 1;
                    senha_atual = i;
                    printf("\n>> SENHA %03d CHAMADA! Dirija-se ao caixa.\n", i+1);
                    encontrou = 1;
                    break;
                }
            }
            if (!encontrou)
                printf("\nNao ha mais senhas na fila.\n");
            break;

        case 2:
            if (senha_atual != -1 && senhas[senha_atual] == 1) {
                senhas[senha_atual] = 2;
                printf("\n>> Senha %03d marcada como ATENDIDA.\n", senha_atual+1);
                senha_atual = -1;
            } else {
                printf("\nNenhuma senha esta sendo atendida no momento.\n");
            }
            break;

        case 3:
            printf("\n--- Fila de Espera ---\n");
            for (int i = 0; i < 20; i++) {
                if (senhas[i] == 0)
                    printf("[ %03d ] ", i+1);
            }
            printf("\n");
            break;

        case 4: {
            int qtd_atendidas = 0, qtd_aguardando = 0, qtd_chamada = 0;
            for (int i = 0; i < 20; i++) {
                if (senhas[i] == 2) qtd_atendidas++;
                else if (senhas[i] == 0) qtd_aguardando++;
                else qtd_chamada++;
            }
            printf("\n=== RELATORIO ===\n");
            printf("Atendidas: %d\n", qtd_atendidas);
            printf("Em atendimento: %d\n", qtd_chamada);
            printf("Aguardando: %d\n", qtd_aguardando);
            break;
        }

        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}
