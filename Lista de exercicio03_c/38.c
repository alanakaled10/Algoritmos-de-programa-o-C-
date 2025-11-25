/* Exercicio 38: Sequencia de Collatz
*/

#include <stdio.h>

int main() {
    long long n; // 'long long' para evitar estouro em picos altos
    int passos = 0;
    long long maior_valor;

    printf("--- SEQUENCIA DE COLLATZ ---\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    printf("%lld ", n);
    maior_valor = n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }

        if (n > maior_valor) maior_valor = n;
        passos++;
        
        printf("-> %lld ", n);
    }

    printf("\n\n--- ESTATISTICAS ---\n");
    printf("Total de passos ate chegar a 1: %d\n", passos);
    printf("Maior valor atingido no percurso: %lld\n", maior_valor);

    return 0;
}