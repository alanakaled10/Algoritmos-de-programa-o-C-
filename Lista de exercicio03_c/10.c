/*Soma até Zero*/

#include <stdio.h>

int main(){

    printf("========  REGRAS ========\n1 -> Digite numeros inteiros\n2 -> Se digitar 0, sera exibida a soma dos numeros digitados\n");
    int num, soma=0;
    while (num!=0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        soma+=num;
    }

    printf("\n-> SOMA: %d", soma);
    

    return 0;
}