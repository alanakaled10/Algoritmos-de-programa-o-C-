/* Exercicio 44: Simulador de Investimento*/

#include <stdio.h>
#include <math.h> 

int main() {
    float capital, taxa, taxa_decimal;
    int tempo;
    float montante_simples, montante_composto;
    float diferenca;

    printf("--- SIMULADOR DE INVESTIMENTO ---\n");

    printf("Digite o Capital inicial (R$): ");
    scanf("%f", &capital);

    printf("Digite a Taxa de Juros mensal (em %%): ");
    scanf("%f", &taxa);

    printf("Digite o Tempo (meses): ");
    scanf("%d", &tempo);

    taxa_decimal = taxa / 100.0;


    montante_simples = capital * (1 + (taxa_decimal * tempo));


    montante_composto = capital * pow((1 + taxa_decimal), tempo);

    printf("\n--- RESULTADOS APOS %d MESES ---\n", tempo);
    printf("Capital Inicial: R$ %.2f\n", capital);
    
    printf("\n> JUROS SIMPLES:\n");
    printf("  Montante Final: R$ %.2f\n", montante_simples);
    printf("  Rendimento: R$ %.2f\n", montante_simples - capital);

    printf("\n> JUROS COMPOSTOS:\n");
    printf("  Montante Final: R$ %.2f\n", montante_composto);
    printf("  Rendimento: R$ %.2f\n", montante_composto - capital);

    diferenca = montante_composto - montante_simples;
    
    printf("\n--- ANALISE ---\n");
    if (diferenca > 0) {
        printf("Os Juros Compostos renderam R$ %.2f a mais.\n", diferenca);
        printf("Melhor opcao: JUROS COMPOSTOS (Longo prazo costuma ser melhor).\n");
    } else if (diferenca == 0) {
        printf("Os rendimentos foram iguais (geralmente ocorre no tempo 1).\n");
    } else {
        printf("Juros Simples foram superiores (caso atipico).\n");
    }

    return 0;
}