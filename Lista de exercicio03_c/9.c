/*Validação de Entrada*/

#include <stdio.h>

int main(){

    int num;
    while (num<0 || num>10)
    {
        printf("Digite um numero de 1 a 10: ");
        scanf("%d", &num);
    }

    printf("Operacao concluida!\nNumero digitado: %d", num);

    return 0;
}