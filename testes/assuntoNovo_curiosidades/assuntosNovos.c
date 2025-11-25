/*
um loop infinito while (1), com break para sair do programa.

Essa forma é muito usada porque:

Evita o uso de valores artificiais (como -1);

Fica mais clara a ideia de “rodar até o usuário querer sair”.
*/

/* Menu Multinível com while(1) - Versão atualizada */
#include <stdio.h>

int main()
{
    int menu;
    int contadorCliente = 0, clienteAtivo = 0, clienteInativo = 0;
    int contadorProduto = 0, estoqueBom = 0, estoqueRuim = 0;
    int estoqueRec, estoqueAtual;
    char nomeCliente[60], nomeProduto[60];

    while (1) // loop infinito - só sai com break
    {
        printf("\n======= MENU PRINCIPAL =======\n");
        printf("1 - Cadastro\n");
        printf("2 - Relatórios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch (menu)
        {
        // ===================== MENU CADASTRO =====================
        case 1:
        {
            int menuCadastro;
            while (1) // loop interno - submenu
            {
                printf("\n---- CADASTRO ----\n");
                printf("1 - Cadastrar Cliente\n");
                printf("2 - Cadastrar Produto\n");
                printf("0 - Voltar ao menu principal\n");
                printf("Escolha uma opção: ");
                scanf("%d", &menuCadastro);

                if (menuCadastro == 0)
                {
                    printf("Voltando ao menu principal...\n");
                    break; // sai do submenu e volta pro principal
                }

                switch (menuCadastro)
                {
                case 1:
                {
                    int ativo;
                    printf("\nCADASTRO CLIENTE\n");
                    printf("Nome: ");
                    scanf("%s", nomeCliente);
                    printf("Cliente ativo? (0-sim / 1-não): ");
                    scanf("%d", &ativo);

                    while (ativo < 0 || ativo > 1)
                    {
                        printf("Opção inválida! (0-sim / 1-não): ");
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

                    printf("Estoque recomendado: ");
                    scanf("%d", &estoqueRec);

                    printf("Estoque atual: ");
                    scanf("%d", &estoqueAtual);

                    if (estoqueAtual <= estoqueRec * 0.15)
                    {
                        estoqueRuim++;
                        printf("⚠️ Estoque baixo! Reabasteça.\n");
                    }
                    else
                    {
                        estoqueBom++;
                        printf("✅ Estoque adequado.\n");
                    }

                    contadorProduto++;
                    break;
                }

                default:
                    printf("Opção inválida!\n");
                    break;
                }
            }
            break;
        }

        // ===================== RELATÓRIOS =====================
        case 2:
            printf("\n======= RELATÓRIOS =======\n");
            printf("------ Clientes ------\n");
            printf("Quantidade total: %d\n", contadorCliente);
            printf("Clientes ativos: %d\n", clienteAtivo);
            printf("Clientes inativos: %d\n\n", clienteInativo);

            printf("------ Produtos ------\n");
            printf("Quantidade total: %d\n", contadorProduto);
            printf("Produtos com estoque bom: %d\n", estoqueBom);
            printf("Produtos com estoque baixo: %d\n", estoqueRuim);
            break;

        // ===================== SAIR =====================
        case 0:
            printf("\nSaindo do programa... Até logo!\n");
            return 0; // encerra o main diretamente

        // ===================== OPÇÃO INVÁLIDA =====================
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
        }
    }

    return 0;
}


/*
💡 Diferença principal entre as versões
Versão antiga (do...while)	Versão nova (while (1))
Precisa inicializar menu com -1	Não precisa
Sai do loop com while (menu != 0)	Sai do loop com break ou return
Ligeiramente menos clara	Mais legível e usada em sistemas reais
Pode causar confusão se menu não for atualizado	Sempre espera uma nova entrada
*/