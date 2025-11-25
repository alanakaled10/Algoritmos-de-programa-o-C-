#include <stdio.h>

int main() {
    int sorteados[6] = {5, 12, 23, 34, 45, 58};
    int aposta[6];
    int acertos = 0;
    int i, j;

    printf("=== Problema 9: Loteria ===\n");
    printf("Digite seus 6 numeros (1-60):\n");
    
    for(i=0; i<6; i++) {
        do {
            printf("Numero %d: ", i+1);
            scanf("%d", &aposta[i]);
        } while(aposta[i] < 1 || aposta[i] > 60);
    }

    printf("\nNumeros acertados: ");
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            if(aposta[i] == sorteados[j]) {
                printf("%d ", aposta[i]);
                acertos++;
            }
        }
    }

    printf("\nTotal de acertos: %d\n", acertos);
    printf("Premiacao: ");
    
    if(acertos == 6) printf("SENA (Parabens!)\n");
    else if(acertos == 5) printf("QUINA\n");
    else if(acertos == 4) printf("QUADRA\n");
    else printf("Nao premiado.\n");

    if(acertos < 6) {
        printf("Numeros sorteados eram: ");
        for(i=0; i<6; i++) printf("%d ", sorteados[i]);
        printf("\n");
    }

    return 0;
}
