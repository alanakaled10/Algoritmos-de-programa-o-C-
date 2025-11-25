/* Exercicio 25: Soma dos Digitos*/

#include <stdio.h>

int main() {
    int num, soma = 0, digito;
    int num_original;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    num_original = num;

    while (num > 0) {
        digito = num % 10; 
        soma = soma + digito;
        num = num / 10; 
    }

    printf("A soma dos digitos de %d e: %d\n", num_original, soma);

    return 0;
}