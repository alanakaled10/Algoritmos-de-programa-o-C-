/* Calculo de Financiamento */

#include <stdio.h>

int main() {
    float valor_bem, entrada, valor_financiado, taxa_juros, valor_total, valor_parcela;
    int num_parcelas;

    printf("Digite o valor do bem: R$ ");
    scanf("%f", &valor_bem);

    printf("Digite o valor da entrada: R$ ");
    scanf("%f", &entrada);

    printf("Digite o numero de parcelas: ");
    scanf("%d", &num_parcelas);

    valor_financiado = valor_bem - entrada;


    if (valor_financiado <= 0) {
        printf("O valor da entrada cobre o bem. Nao ha financiamento.\n");
        return 0;
    }

    if (num_parcelas <= 6) {
        taxa_juros = 0.05; 
    } 
    else if (num_parcelas <= 12) {
        taxa_juros = 0.10; 
    }
    else if (num_parcelas <= 24) {
        taxa_juros = 0.15; 
    } 
    else {
        taxa_juros = 0.20; 
    }

   
    if (valor_financiado > 50000) {
        taxa_juros = taxa_juros + 0.02; 
    }

  
    valor_total = valor_financiado * (1 + taxa_juros);
    valor_parcela = valor_total / num_parcelas;

    printf("\n--- RESUMO DO FINANCIAMENTO ---\n");
    printf("Valor a financiar: R$ %.2f\n", valor_financiado);
    printf("Taxa aplicada: %.1f%%\n", taxa_juros * 100);
    printf("Valor final com juros: R$ %.2f\n", valor_total);
    printf("Valor de cada parcela (%dx): R$ %.2f\n", num_parcelas, valor_parcela);

    return 0;
}