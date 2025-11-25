/* Exercicio 36: Numeros Perfeitos.
*/

#include <stdio.h>

int main() {
    int n, soma_divisores;

    printf("--- BUSCA DE NUMEROS PERFEITOS ---\n");
    printf("Digite o limite N para busca: ");
    scanf("%d", &n);

    printf("Numeros perfeitos encontrados entre 1 e %d:\n", n);

    for (int i = 1; i <= n; i++) {
        
        soma_divisores = 0;

        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                soma_divisores += j;
            }
        }

        if (soma_divisores == i && i != 0) {
            printf("-> %d\n", i);
        }
    }

    return 0;
}