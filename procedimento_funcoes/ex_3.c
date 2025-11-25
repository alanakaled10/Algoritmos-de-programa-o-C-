#include <stdio.h>

int contarInversoes(int v[], int n) {
    int i, j, inversoes = 0;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(v[i] > v[j]) {
                inversoes++;
            }
        }
    }
    return inversoes;
}

int main() {
    int v[] = {3, 1, 2, 5, 4};
    int tamanho = sizeof(v)/sizeof(v[0]);

    printf("Quantidade de inversoes: %d\n",
           contarInversoes(v, tamanho));

    return 0;
}
