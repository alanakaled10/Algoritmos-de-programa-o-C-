/* Exercicio 45: Calculadora Cientifica*/

#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    int opcao;
    float num, resultado, expoente;

    printf("--- CALCULADORA CIENTIFICA ---\n");
    printf("1. Seno (sin)\n");
    printf("2. Cosseno (cos)\n");
    printf("3. Tangente (tan)\n");
    printf("4. Logaritmo base 10 (log)\n");
    printf("5. Logaritmo Natural (ln)\n");
    printf("6. Raiz Quadrada (sqrt)\n");
    printf("7. Potenciacao (pow)\n");
    printf("Escolha a operacao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 6) {
        printf("Digite o numero: ");
        scanf("%f", &num);
    }

    switch (opcao) {
        case 1: 
            
            resultado = sin(num * M_PI / 180.0); 
            printf("sin(%.2f graus) = %.4f\n", num, resultado);
            break;

        case 2:
            resultado = cos(num * M_PI / 180.0);
            printf("cos(%.2f graus) = %.4f\n", num, resultado);
            break;

        case 3: 
           
            if ((int)num % 180 == 90) {
                printf("ERRO: Tangente indefinida para este angulo.\n");
            } else {
                resultado = tan(num * M_PI / 180.0);
                printf("tan(%.2f graus) = %.4f\n", num, resultado);
            }
            break;

        case 4:
            if (num > 0) {
                resultado = log10(num);
                printf("log10(%.2f) = %.4f\n", num, resultado);
            } else {
                printf("ERRO: Logaritmo so existe para numeros maiores que zero.\n");
            }
            break;

        case 5:
            if (num > 0) {
                resultado = log(num); 
                printf("ln(%.2f) = %.4f\n", num, resultado);
            } else {
                printf("ERRO: Logaritmo so existe para numeros maiores que zero.\n");
            }
            break;

        case 6: 
            if (num >= 0) {
                resultado = sqrt(num);
                printf("Raiz quadrada de %.2f = %.4f\n", num, resultado);
            } else {
                printf("ERRO: Nao existe raiz quadrada real de numero negativo.\n");
            }
            break;

        case 7: 
            printf("Digite a Base: ");
            scanf("%f", &num);
            printf("Digite o Expoente: ");
            scanf("%f", &expoente);
            
            resultado = pow(num, expoente);
            printf("%.2f elevado a %.2f = %.4f\n", num, expoente, resultado);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}