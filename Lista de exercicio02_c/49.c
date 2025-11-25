/*Sistema de Imposto de Renda (Logica Aninhada Complexa)*/

#include <stdio.h>

int main() {
    float salario_bruto, salario_liquido;
    float gastos_saude;
    float base_calculo, imposto_devido;
    int num_dependentes;

    const float DEDUCAO_POR_DEPENDENTE = 189.59;
    
    printf("--- CALCULO DE IMPOSTO DE RENDA ---\n");
    printf("Salario Bruto Mensal: R$ "); 
    scanf("%f", &salario_bruto);
    printf("Numero de dependentes: "); 
    scanf("%d", &num_dependentes);
    printf("Gastos dedutiveis (Saude + Educacao): R$ "); 
    scanf("%f", &gastos_saude); 

 
    base_calculo = salario_bruto - (num_dependentes * DEDUCAO_POR_DEPENDENTE) - gastos_saude;

    if (base_calculo < 0) base_calculo = 0;

    printf("\nBase de Calculo: R$ %.2f\n", base_calculo);


    if (base_calculo <= 1903.98) {
        imposto_devido = 0.0;
        printf("Aliquota: ISENTO\n");
    } 
    else if (base_calculo <= 2826.65) {
        imposto_devido = (base_calculo * 0.075) - 142.80;
        printf("Aliquota: 7.5%%\n");
    }
    else if (base_calculo <= 3751.05) {
        imposto_devido = (base_calculo * 0.15) - 354.80;
        printf("Aliquota: 15.0%%\n");
    }
    else if (base_calculo <= 4664.68) {
        imposto_devido = (base_calculo * 0.225) - 636.13;
        printf("Aliquota: 22.5%%\n");
    }
    else {
        imposto_devido = (base_calculo * 0.275) - 869.36;
        printf("Aliquota: 27.5%%\n");
    }

    if (imposto_devido < 0) imposto_devido = 0;

    salario_liquido = salario_bruto - imposto_devido;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Imposto a Pagar: R$ %.2f\n", imposto_devido);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("Aliquota Efetiva: %.2f%%\n", (imposto_devido / salario_bruto) * 100);

    return 0;
}