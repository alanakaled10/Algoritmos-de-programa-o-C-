#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para toupper() -> letra maiúscula


int main()
{

    char reserva[5][8];
    char coluna;
    int linha;
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            reserva[i][j] = ' ';
            
        }
    }

    printf("=== MAPA DE ASSENTOS ===\n");

    printf("\n    A     B     C     D     E     F     G     H\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i+1);
        for (int j = 0; j < 8; j++)
        {
            printf("[ %c ] ", reserva[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite o assento que deseja reservar (ex. B3): ");
    scanf(" %c%d", &coluna, &linha);

    system("cls");

    coluna = toupper(coluna);
    int j = coluna - 'A';
    int i = linha - 1;

    if (i >= 0 && i < 5 && j >= 0 && j < 8) {
        reserva[i][j] = 'X';
    } else {
        printf("\nAssento invalido!\n");
        return 0;
    }

    printf("\n=== MAPA DE ASSENTOS ATUALIZADO ===\n");

    printf("    A     B     C     D     E     F     G     H\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i+1);
        for (int j = 0; j < 8; j++)
        {
            printf("[ %c ] ", reserva[i][j]);
        }
        printf("\n");
    }



    return 0;
}