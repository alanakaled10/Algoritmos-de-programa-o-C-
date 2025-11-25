#include <stdio.h>
int main(){
    
    int num;
    printf("Digite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int qntdEstoque, estoqueMin;
        char nome[30];   
        printf("\n\nProduto numero %d \n", i);
        printf("\nNome do produto: ");
        scanf(" %[^\n]", nome);

        printf("\nQuantidade de estoque: ");
        scanf("%d", &qntdEstoque);

        printf("\nEstoque minimo recomendado: ");
        scanf("%d", &estoqueMin);

        if (qntdEstoque<=estoqueMin)
        {
            printf("\n------ O produto '%s' precisa ser reposto! ------ \n(Estoque: %d, minimo: %d)", nome, qntdEstoque, estoqueMin);
        }
        else
        {
            printf("\n------ O produto '%s' tem estoque suficiente! ------ \n(Estoque: %d, minimo: %d)", nome, qntdEstoque, estoqueMin);
        }
        
        
    }
    
    
    return 0;
}