#include <stdio.h>

int busca(int v[], int tamanho, int elemento) {
    int i;
    for(i = 0; i < tamanho; i++) {
        if(v[i] == elemento)
            return i; 
    }
    return -1; 
}

int main() {
    int n, i, elemento;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("Digite o elemento para buscar: ");
    scanf("%d", &elemento);

    int pos = busca(v, n, elemento);

    if(pos == -1)
        printf("Elemento nao encontrado.\n");
    else
        printf("Elemento encontrado na posicao %d.\n", pos);

    return 0;
}
