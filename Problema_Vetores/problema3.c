/*Inventário de Loja de Games*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int estoque[10][2];
    int consulta, quantidade, id;
    int vendidos = 0;

    printf("===== Estoque =====\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Produto %d: ", i+1);
        scanf("%d", &estoque[i][1]);
        estoque[i][0] = i+1;
    }

    system("cls");

    printf("=== ESTOQUE INICIAL ===\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nProduto %d: %d",estoque[i][0], estoque[i][1]);
    }

    printf("\nQuantos produtos foram vendidos (ate 5)? ");
    scanf("%d", &consulta);

    while (consulta < 0 || consulta>5)
    {
        printf("\nRestringido a 5 vendas! \nDigite novamente: ");
        scanf("%d", &consulta);
    }
    
    printf("\n=== VENDAS ===\n");
    for (int i = 0; i < consulta; i++)
    {
        printf("Produto %d \n", i+1);
        printf("ID do produto: ");
        scanf("%d", &id);

        printf("Unidades vendidas: ");
        scanf("%d", &quantidade);

        vendidos += quantidade;

        for (int j = 0; j < 10; j++)
        {
            if (id == estoque[j][0])
            {
                estoque[j][1] -= quantidade;
            }
            
        }

    }
    system("cls");
    
    printf("=== ESTOQUE ATUALIZADO ===\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nProduto %d: %d",estoque[i][0], estoque[i][1]);
    }

    printf("\n\n=== RELATORIO FINAL ===\n");

    printf("Produtos esgotados: ");
    for (int i = 0; i < 10; i++)
    {
        if (estoque [i][1] == 0 || estoque [i][1] < 0)
        {
            printf("Produto %d, ", estoque[i][0]);
        }
       
    }

    printf("\nProdutos com estoque paixo: ");
    for (int i = 0; i < 10; i++)
    {
        if (estoque [i][1] <= 5)
        {
            printf("Produto %d, ", estoque[i][0]);
        }
       
    }

    printf("\nTotal de vendidos: %d", vendidos);

}