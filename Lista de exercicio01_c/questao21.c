/*Incremento e Decremento*/

#include <stdio.h>
int main(){
    
    int num, numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nValor lido: %d\n", num);
    numero = num;

    printf("++%d: %d\n", numero, ++num);
    num = numero;
    printf("%d++: %d\n", numero, num++);
    num = numero;
    printf("--%d: %d\n", numero, --num);
    num = numero;
    printf("%d--: %d\n", numero, num--);
    num = numero;
    return 0;
}