#include <stdio.h>

int contarNumero(int v[], int tamanho, int n) {
    int i, cont = 0;
    for(i = 0; i < tamanho; i++) {
        if(v[i] == n) cont++;
    }
    return cont;
}

int main() {
    int v[10] = {1, 5, 2, 5, 9, 5, 3, 4, 5, 7};
    int numero;

    printf("Digite um numero para procurar no vetor: ");
    scanf("%d", &numero);

    printf("O numero %d aparece %d vezes.\n",
           numero,
           contarNumero(v, 10, numero));

    return 0;
}
