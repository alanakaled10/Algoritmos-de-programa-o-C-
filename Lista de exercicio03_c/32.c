/*Controle de Estoque*/

#include <stdio.h>
#include <string.h>

int main()
{

    char produtos[10][50];
    int menuPrincipal;
    int total = 0;

    do
    {
        printf("\n\n====== CONTROLE DE ESTOQUE ======\n");
        printf("1 - Adicionar produtos\n");
        printf("2 - Remover produtos\n");
        printf("3 - Listar produtos produtos\n");
        printf("0 - Sair \n");

        printf("Digite uma opcao: ");
        scanf("%d", &menuPrincipal);
        getchar();

        switch (menuPrincipal)
        {
        case 1:
            if (total < 10)
            {
                printf("\nNome do produto: ");
                fgets(produtos[total], 50, stdin);
                produtos[total][strcspn(produtos[total], "\n")] = '\0'; // remove o \n
                total++;
                printf("\nProduto adicionado com sucesso!\n");
            }
            else
            {
                printf("\nEstoque cheio! ");
            }
            break;

        case 2:

            if (total > 0)
            {
                printf("\nDigite o numero do produto para remover (1 a %d)", total);
                int pos;
                scanf("%d", &pos);
                getchar();
                if (pos >= 1 && pos <= total)
                {
                    // "empurra" os próximos itens pra trás
                    for (int i = pos - 1; i < total - 1; i++)
                    {
                        strcpy(produtos[i], produtos[i + 1]);
                    }
                    total--;
                    printf("Produto removido!\n");
                }
                else
                {
                    printf("Numero invalido!\n");
                }
            }
            else
            {
                printf("\nNenhum produto para remover!\n");
            }
            

            break;
        case 3:
            
            if (total == 0)
            {
                printf("\nNenhum produto cadastrado!\n");
            }
            else
            {
                printf("|\n========= PRODUTOS NO ESTOQUE =========\n\n");
                for (int i = 0; i < total; i++)
                {
                    printf("%d. %s\n", i+1, produtos[i]);
                }
                
            } 
            break;

        case 0:
            printf("Saindo...\n");
            break;
        default:

            printf("Opcao Invalida!");
            break;
            }
        }
        while (menuPrincipal != 0)
            ;

        return 0;
    }