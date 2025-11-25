#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tabuleiro[3][3];
    int contador = 1;
    int jogadas = 0;
    int posicao;
    char jogador = 'X'; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = contador + '0';
            contador++;
        }
    }

    while (jogadas < 9)
    {
        system("cls"); 

        printf("=== JOGO DA VELHA ===\n\n");
        for (int i = 0; i < 3; i++)
        {
            printf(" %c | %c | %c", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
            if (i < 2)
                printf("\n-----------\n");
        }

        printf("\n\nVez do jogador %c", jogador);
        printf("\nEscolha uma posicao (1 a 9): ");
        scanf("%d", &posicao);

        if (posicao < 1 || posicao > 9)
        {
            printf("\nPosicao invalida! Tente novamente...\n");
            system("pause");
            continue;
        }

        int linha = (posicao - 1) / 3;
        int coluna = (posicao - 1) % 3;

        if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O')
        {
            printf("\nEssa posicao ja foi marcada! Escolha outra.\n");
            system("pause");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        if (jogador == 'X')
            jogador = 'O';
        else
            jogador = 'X';
    }

    system("cls");
    printf("=== TABULEIRO FINAL ===\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2)
            printf("\n-----------\n");
    }

    printf("\n\nJogo encerrado! (sem verificacao de vencedor nesta versao)\n");
    return 0;
}
