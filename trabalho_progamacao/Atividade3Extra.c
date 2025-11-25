#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tabuleiro[3][3];
    int contador = 1, posicao;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = contador + '0';
            contador++;
        }
    }

    printf("=== TABULEIRO DO JOGO DA VELHA ===\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf ("%c | %c | %c", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i<2)
        {
            printf("\n---------\n");
        }
        
    }
    printf("\nQual posicao (1-9) deseja marcar o x?  ");
    scanf("%d", &posicao);
    system("cls");

    while (posicao<1 || posicao>9)
    {
        printf("Posicao invalida! Digite novamente: ");
        scanf("%d", &posicao);
        system("cls");
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro[i][j] == posicao + '0')
            {
                tabuleiro[i][j] = 'x';
            }
            
        }
    }

    printf("=== TABULEIRO DO JOGO DA VELHA ATUALIZADO ===\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf ("%c | %c | %c", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i<2)
        {
            printf("\n---------\n");
        }
        
    }

    return 0;
}