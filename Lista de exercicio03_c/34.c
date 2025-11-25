#include <stdio.h>

int main() {
    int n;

    printf("Digite a altura do losango (impar): ");
    scanf("%d", &n);

    while (n % 2 == 0) {
        printf("Use um número ímpar para ficar simétrico!\n");
        return 0;
    }

    int i, j;
    int meio = n / 2;

    // Parte superior (incluindo o meio)
    for (i = 0; i <= meio; i++) {
      
        for (j = 0; j < meio - i; j++)
            printf(" ");
   
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

       // Parte inferior
    for (i = meio - 1; i >= 0; i--) {
       
        for (j = 0; j < meio - i; j++)
        
            printf(" ");
        
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}