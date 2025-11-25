/*Soma de Números*/

#include <stdio.h>

int main(){

    int num, soma = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma+=num;
    }
    
    printf("A soma dos numeros digitados e: %d", soma);

    return 0;
}