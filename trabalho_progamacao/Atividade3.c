#include <stdio.h>

int main()
{

    int tabuleiro[3][3];
    int contador = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf ("%d | %d | %d", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i<2)
        {
            printf("\n---------\n");
        }
        
    }
    

    return 0;
}