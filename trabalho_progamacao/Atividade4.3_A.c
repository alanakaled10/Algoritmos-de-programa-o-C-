#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pedido[10][3][20];
    int quantidade;

    printf("Quantos pedidos deseja armazenar? (Maximo 10): ");
    scanf("%d", &quantidade);
    getchar(); // consome o ENTER deixado pelo scanf
    system("cls");

    while (quantidade < 1 || quantidade > 10)
    {
        printf("Limitado a 10 pedidos!\nQuantos pedidos deseja armazenar? ");
        scanf("%d", &quantidade);
        getchar();
        system("cls");
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n=== Pedido %d ===\n", i + 1);

        printf("Numero do pedido: ");
        fgets(pedido[i][0], 20, stdin);
        pedido[i][0][strcspn(pedido[i][0], "\n")] = '\0'; // remove o \n

        printf("Valor do pedido: ");
        fgets(pedido[i][1], 20, stdin);
        pedido[i][1][strcspn(pedido[i][1], "\n")] = '\0';

        printf("Status do pedido: ");
        fgets(pedido[i][2], 20, stdin);
        pedido[i][2][strcspn(pedido[i][2], "\n")] = '\0';
    }

    system("cls");

    printf("=== PEDIDOS ARMAZENADOS ===\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("\nPedido %d:\n", i + 1);
        printf("Numero: %s\n", pedido[i][0]);
        printf("Valor: %s\n", pedido[i][1]);
        printf("Status: %s\n", pedido[i][2]);
    }

    return 0;
}
