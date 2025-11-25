#include <stdio.h>
int main(){
    
    int num1, num2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1+num2;

    printf("A soma entre %d e %d e: \n%d", num1, num1, soma);
    
    return 0;
}