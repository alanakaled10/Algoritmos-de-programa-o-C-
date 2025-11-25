/*MDC (Máximo Divisor Comum)*/

#include <stdio.h>

int main() {
    int num1, num2, resto;
    int a, b; 

    printf("--- CALCULADORA DE MDC (Algoritmo de Euclides) ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    a = num1;
    b = num2;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("\nO MDC de %d e %d e: %d\n", num1, num2, a);

    return 0;
}