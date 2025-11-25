/*Padrao Xadrez NxN*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("--- GERADOR DE PADRAO XADREZ ---\n");
    printf("Digite o tamanho do tabuleiro (N): ");
    scanf("%d", &n);

    printf("\n");

    for (i = 0; i < n; i++) {

        for (j = 0; j < n; j++) {

            if ((i + j) % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
            

        }
        

        printf("\n");
    }

    return 0;
}