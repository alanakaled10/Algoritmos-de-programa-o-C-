/* Exercicio 42: Simulacao de Banco
*/

#include <stdio.h>

int main() {
    float saldo = 0.0;
    float historico[10];
    int total_mov = 0;   
    int opcao, i;
    float valor;

    for(i=0; i<10; i++) historico[i] = 0.0;

    do {
        printf("\n=== BANCO DIGITAL ===\n");
        printf("1. Deposito\n");
        printf("2. Saque\n");
        printf("3. Extrato (Saldo + Historico)\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    
         
                    historico[total_mov % 10] = valor; 
                    total_mov++;
                    printf("Sucesso!\n");
                } else {
                    printf("Valor invalido.\n");
                }
                break;

            case 2: 
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    
                    historico[total_mov % 10] = -valor;
                    total_mov++;
                    printf("Sucesso! Retire o dinheiro.\n");
                } else {
                    printf("Saldo insuficiente ou valor invalido.\n");
                }
                break;

            case 3:
                printf("\n--- EXTRATO ---\n");
                printf("Saldo Atual: R$ %.2f\n", saldo);
                printf("Ultimas movimentacoes:\n");

                for(i = 0; i < 10; i++) {
                    if (historico[i] != 0) {
                         if (historico[i] > 0) printf(" + R$ %.2f\n", historico[i]);
                         else printf(" - R$ %.2f\n", -historico[i]);
                    }
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}