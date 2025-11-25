/*Analise de Resistores (Fisica/Eletrica)*/

#include <stdio.h>

int main() {
    float r1, r2, r3, req;
    int tipo_ligacao;

    printf("--- CALCULADORA DE RESISTORES ---\n");
    printf("Valor do Resistor 1 (Ohms): "); scanf("%f", &r1);
    printf("Valor do Resistor 2 (Ohms): "); scanf("%f", &r2);
    printf("Valor do Resistor 3 (Ohms): "); scanf("%f", &r3);

    printf("\nTipo de Ligacao:\n");
    printf("1. Serie (Sequencial)\n");
    printf("2. Paralelo (Divisao de corrente)\n");
    printf("Escolha: ");
    scanf("%d", &tipo_ligacao);

    if (tipo_ligacao == 1) {
   
        req = r1 + r2 + r3;
        printf("\nLigacao em SERIE.\n");
    } 
    else if (tipo_ligacao == 2) {

        if (r1 == 0 || r2 == 0 || r3 == 0) {
            printf("Erro: Resistores em paralelo nao podem ser 0 (curto-circuito ideal).\n");
            return 1;
        }
        req = 1.0 / ((1.0/r1) + (1.0/r2) + (1.0/r3));
        printf("\nLigacao em PARALELO.\n");
    } 
    else {
        printf("Opcao de ligacao invalida.\n");
        return 1;
    }

    printf("Resistencia Equivalente (Req): %.2f Ohms\n", req);

    printf("Classificacao do Circuito: ");
    if (req < 100) {
        printf("Baixa Resistencia (Alta Corrente)\n");
    } else if (req < 10000) { 
        printf("Resistencia Media (Uso geral)\n");
    } else {
        printf("Alta Resistencia (Baixa Corrente)\n");
    }

    return 0;
}