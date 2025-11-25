/*Menu Multiníve*/

#include <stdio.h>

int main()
{
    int menu = -1;
    int contadorCliente = 0, clienteAtivo = 0, clienteInativo = 0;
    int contadorProduto = 0, estoqueBom = 0, estoqueRuim = 0;
    int estoqueRec, estoqueAtual;
    char nomeCliente[60], nomeProduto[60];

    do
    {
        printf("\n======= MENU PRINCIPAL =======\n");
        printf("1 - Cadastro\n");
        printf("2 - Relatorios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
        {
            int menuCadastro = -1;
            do
            {
                printf("\n---- CADASTRO ----\n");
                printf("1 - Cadastrar Cliente\n");
                printf("2 - Cadastrar Produto\n");
                printf("0 - Voltar ao menu principal\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &menuCadastro);

                switch (menuCadastro)
                {
                case 1:
                {
                    int ativo;
                    printf("\nCADASTRO CLIENTE\n");
                    printf("Nome: ");
                    scanf("%s", nomeCliente);
                    printf("Cliente Ativo? (0-sim / 1-nao): ");
                    scanf("%d", &ativo);

                    while (ativo < 0 || ativo > 1)
                    {
                        printf("Opcao invalida! (0-sim / 1-nao): ");
                        scanf("%d", &ativo);
                    }

                    if (ativo == 0)
                        clienteAtivo++;
                    else
                        clienteInativo++;

                    contadorCliente++;
                    printf("Cliente cadastrado com sucesso!\n");
                    break;
                }

                case 2:
                {
                    printf("\nCADASTRO PRODUTO\n");
                    printf("Nome: ");
                    scanf("%s", nomeProduto);

                    printf("Estoque minimo recomendado: ");
                    scanf("%d", &estoqueRec);

                    printf("Estoque atual: ");
                    scanf("%d", &estoqueAtual);

                    if (estoqueAtual <= estoqueRec)
                    {
                        estoqueRuim++;
                        printf("Estoque baixo! Reabasteca.\n");
                    }
                    else
                    {
                        estoqueBom++;
                        printf("Estoque adequado.\n");
                    }

                    contadorProduto++;
                    break;
                }

                case 0:
                    printf("Voltando ao menu principal...\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
                    break;
                }

            } while (menuCadastro != 0);
            break;
        }

        case 2:
            printf("\n======= RELATORIOS =======\n");
            printf("------ Clientes ------\n");
            printf("Quantidade total: %d\n", contadorCliente);
            printf("Clientes ativos: %d\n", clienteAtivo);
            printf("Clientes inativos: %d\n\n", clienteInativo);

            printf("------ Produtos ------\n");
            printf("Quantidade total: %d\n", contadorProduto);
            printf("Produtos com estoque bom: %d\n", estoqueBom);
            printf("Produtos com estoque baixo: %d\n", estoqueRuim);
            break;

        case 0:
            printf("\nSaindo...\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
        }

    } while (menu != 0);

    return 0;
}
