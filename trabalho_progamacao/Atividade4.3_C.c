#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char baralho[52][2][20];
    char valores[13][10] = {
        "A", "2", "3", "4", "5", "6", "7",
        "8", "9", "10", "J", "Q", "K"
    };
    char naipes[4][10] = {
        "Copas", "Ouros", "Paus", "Espadas"
    };

    int contador = 0;

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 13; j++)
        {
            strcpy(baralho[contador][0], valores[j]);
            strcpy(baralho[contador][1], naipes[i]); 
            contador++;
        }
    }

    system("cls");
    printf("===== BARALHO DE CARTAS =====\n\n");

    for (int i = 0; i < 52; i++)
    {
        printf("Carta %2d: %-2s de %s\n", i + 1, baralho[i][0], baralho[i][1]);
    }

    return 0;
}
