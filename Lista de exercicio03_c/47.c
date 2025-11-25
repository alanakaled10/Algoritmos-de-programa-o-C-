/* Exercicio 47: Matriz Espiral (Caracol)
*/

#include <stdio.h>

int main() {
    int n;
    int matriz[20][20]; 

    int topo, fundo, esquerda, direita;
    int valor = 1;
    int i;

    printf("--- MATRIZ ESPIRAL ---\n");
    printf("Digite o tamanho N da matriz (max 20): ");
    scanf("%d", &n);

    if (n > 20) n = 20;

    topo = 0;
    fundo = n - 1;
    esquerda = 0;
    direita = n - 1;

    while (valor <= n * n) {

        for (i = esquerda; i <= direita; i++) {
            matriz[topo][i] = valor++;
        }
        topo++;


        for (i = topo; i <= fundo; i++) {
            matriz[i][direita] = valor++;
        }
        direita--;


        if (topo <= fundo) {
            for (i = direita; i >= esquerda; i--) {
                matriz[fundo][i] = valor++;
            }
            fundo--; 
        }

        if (esquerda <= direita) {
            for (i = fundo; i >= topo; i--) {
                matriz[i][esquerda] = valor++;
            }
            esquerda++; 
        }
    }

    printf("\nResultado:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matriz[i][j]); // %3d para alinhar
        }
        printf("\n");
    }

    return 0;
}