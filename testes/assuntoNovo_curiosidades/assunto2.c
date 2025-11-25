/*
Aqui está a versão final, já com:
✅ limpeza de tela (system("cls")),
✅ pausa antes de voltar ao menu (system("pause")),
✅ espaçamentos e mensagens mais bonitas.
*/

/* Menu Multinível com interface melhorada (Windows)
   Autor: Alana + ChatGPT
*/

#include <stdio.h>
#include <stdlib.h> // para system("cls") e system("pause")

int main()
{
    int menu;
    int contadorCliente = 0, clienteAtivo = 0, clienteInativo = 0;
    int contadorProduto = 0, estoqueBom = 0, estoqueRuim = 0;
    int estoqueRec, estoqueAtual;
    char nomeCliente[60], nomeProduto[60];

    while (1) // loop principal
    {
        system("cls"); // limpa a tela
        printf("=====================================\n");
        printf("           MENU PRINCIPAL            \n");
        printf("=====================================\n");
        printf("1 - Cadastro\n");
        printf("2 - Relatórios\n");
        printf("0 - Sair\n");
        printf("-------------------------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch (menu)
        {
        // ===================== MENU CADASTRO =====================
        case 1:
        {
            int menuCadastro;
            while (1)
            {
                system("cls");
                printf("=====================================\n");
                printf("             CADASTRO                \n");
                printf("=====================================\n");
                printf("1 - Cadastrar Cliente\n");
                printf("2 - Cadastrar Produto\n");
                printf("0 - Voltar ao menu principal\n");
                printf("-------------------------------------\n");
                printf("Escolha uma opção: ");
                scanf("%d", &menuCadastro);

                if (menuCadastro == 0)
                {
                    printf("Voltando ao menu principal...\n");
                    system("pause");
                    break;
                }

                switch (menuCadastro)
                {
                case 1:
                {
                    int ativo;
                    system("cls");
                    printf("=========== CADASTRO CLIENTE ==========\n");
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
                    printf("\n✅ Cliente cadastrado com sucesso!\n");
                    system("pause");
                    break;
                }

                case 2:
                {
                    system("cls");
                    printf("=========== CADASTRO PRODUTO ==========\n");
                    printf("Nome: ");
                    scanf("%s", nomeProduto);

                    printf("Estoque recomendado: ");
                    scanf("%d", &estoqueRec);

                    printf("Estoque atual: ");
                    scanf("%d", &estoqueAtual);

                    if (estoqueAtual <= estoqueRec * 0.15)
                    {
                        estoqueRuim++;
                        printf("\n⚠️ Estoque baixo! Reabasteça.\n");
                    }
                    else
                    {
                        estoqueBom++;
                        printf("\n✅ Estoque adequado.\n");
                    }

                    contadorProduto++;
                    system("pause");
                    break;
                }

                default:
                    printf("Opção inválida!\n");
                    system("pause");
                    break;
                }
            }
            break;
        }

        // ===================== RELATÓRIOS =====================
        case 2:
            system("cls");
            printf("=========== RELATÓRIOS ==========\n\n");
            printf("------ CLIENTES ------\n");
            printf("Total de clientes: %d\n", contadorCliente);
            printf("Ativos: %d\n", clienteAtivo);
            printf("Inativos: %d\n\n", clienteInativo);

            printf("------ PRODUTOS ------\n");
            printf("Total de produtos: %d\n", contadorProduto);
            printf("Estoque bom: %d\n", estoqueBom);
            printf("Estoque baixo: %d\n", estoqueRuim);

            printf("\n=====================================\n");
            system("pause");
            break;

        // ===================== SAIR =====================
        case 0:
            system("cls");
            printf("Encerrando o programa...\n");
            system("pause");
            return 0;

        // ===================== INVÁLIDO =====================
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            system("pause");
            break;
        }
    }

    return 0;
}
