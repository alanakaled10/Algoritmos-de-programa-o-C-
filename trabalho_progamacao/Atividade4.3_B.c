#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    char produtos[20][6][20];

    printf("Quantos produtos deseja cadastrar? (Maximo 20): ");
    scanf("%d", &quantidade);
    getchar(); 
    system("cls");

    while (quantidade < 1 || quantidade > 20)
    {
        printf("Valor invalido! Digite entre 1 e 20: ");
        scanf("%d", &quantidade);
        getchar();
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("Nome do produto: ");
        fgets(produtos[i][0], 20, stdin);
        produtos[i][0][strcspn(produtos[i][0], "\n")] = '\0';
        
        for (int j = 1; j <= 5; j++)
        {
            printf("Quantidade do produto na filial %d: ", j);
            fgets(produtos[i][j], 10, stdin);
            produtos[i][j][strcspn(produtos[i][j], "\n")] = '\0';
        }
        system("cls");
        
    }

    printf("========= RELATORIO DE PRODUTOS =========\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n----- Produto %d -----\n", i+1);
        printf("\nNome: %s\n", produtos[i][0]);
        for (int j = 1; j < 6; j++)
        {
            printf("Quantidade Filial %d: %s", j, produtos[i][j]);  
        }
    }
    return 0;
}
