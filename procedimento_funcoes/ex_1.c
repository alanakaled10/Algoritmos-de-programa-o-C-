#include <stdio.h>


float adicao(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if(b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n********** CALCULADORA **********\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("*********************************\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4) {
            printf("Digite os dois numeros que deseja realizar a operacao: ");
            scanf("%f", &num1, &num2);
            
        }

        switch(opcao) {
            case 1: resultado = adicao(num1, num2); break;
            case 2: resultado = subtracao(num1, num2); break;
            case 3: resultado = multiplicacao(num1, num2); break;
            case 4: resultado = divisao(num1, num2); break;
            case 5: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n"); continue;
        }

        if(opcao >= 1 && opcao <= 4)
            printf("Resultado: %.2f\n", resultado);

    } while(opcao != 5);

    return 0;
}
