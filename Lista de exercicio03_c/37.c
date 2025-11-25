/* Exercicio 37: Crivo de Eratostenes
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, p, i;
    int *primos; 

    printf("--- CRIVO DE ERATOSTENES ---\n");
    printf("Encontrar primos ate o numero: ");
    scanf("%d", &n);

    primos = (int*) malloc((n + 1) * sizeof(int));

    for (i = 0; i <= n; i++) primos[i] = 1;
    
    primos[0] = 0;
    primos[1] = 0; 

    for (p = 2; p * p <= n; p++) {

        if (primos[p] == 1) {

            for (i = p * p; i <= n; i += p) {
                primos[i] = 0;
            }
        }
    }

    printf("\nNumeros Primos ate %d:\n", n);
    int contador = 0;
    for (i = 2; i <= n; i++) {
        if (primos[i] == 1) {
            printf("%d ", i);
            contador++;
        }
    }
    printf("\n\nTotal de primos encontrados: %d\n", contador);

    free(primos); // Libera a memoria
    return 0;
}