/*Sistema de Progressao Salarial*/

#include <stdio.h>

int main() {
    float salario_atual, novo_salario, percentual;
    int anos_empresa, avaliacao;

    printf("--- RH: SISTEMA DE PROGRESSAO ---\n");
    printf("Salario Atual: R$ ");
    scanf("%f", &salario_atual);

    printf("Anos de Empresa: ");
    scanf("%d", &anos_empresa);

    printf("Avaliacao de Desempenho (1-Ruim a 5-Excelente): ");
    scanf("%d", &avaliacao);


    if (avaliacao == 1) {
        percentual = 0.0; 
        printf("Status: Avaliacao insatisfatoria. Sem aumento.\n");
    }
    else if (avaliacao == 2) {
        percentual = 0.05;
    }
    else if (avaliacao == 3) {
 
        if (anos_empresa >= 5) {
            percentual = 0.10 + 0.02; 
        } else {
            percentual = 0.10;
        }
    }
    else if (avaliacao == 4) {

        if (anos_empresa >= 5) {
            percentual = 0.15 + 0.03; 
        } else {
            percentual = 0.15;
        }
    }
    else if (avaliacao == 5) {
  
        if (anos_empresa >= 10) {
            percentual = 0.20 + 0.10; 
        } 
        else if (anos_empresa >= 5) {
            percentual = 0.20 + 0.05;
        } 
        else {
            percentual = 0.20;
        }
    }
    else {
        printf("Avaliacao invalida!\n");
        return 1;
    }

    novo_salario = salario_atual * (1 + percentual);

    printf("\n--- RESUMO DA PROGRESSAO ---\n");
    printf("Salario Antigo: R$ %.2f\n", salario_atual);
    printf("Percentual Total: %.1f%%\n", percentual * 100);
    printf("Aumento em R$: R$ %.2f\n", novo_salario - salario_atual);
    printf("NOVO SALARIO: R$ %.2f\n", novo_salario);

    return 0;
}