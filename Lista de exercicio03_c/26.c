/*Numero Palindromo*/

#include <stdio.h>

int main() {
    int num, original, reverso = 0, resto;

    printf("Digite um numero: ");
    scanf("%d", &num);

    original = num; 

    while (num > 0) {
        resto = num % 10;            
        reverso = (reverso * 10) + resto; 
        num = num / 10;              
    }

    printf("Original: %d\n", original);
    printf("Invertido: %d\n", reverso);

    if (original == reverso) {
        printf("RESULTADO: E um PALINDROMO!\n");
    } else {
        printf("RESULTADO: Nao e palindromo.\n");
    }

    return 0;
}