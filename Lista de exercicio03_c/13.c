/*Maior Número*/

#include <stdio.h>

int main(){

    int num, numMaior=0;

    printf("========= REGRAS =========\n");
    printf("Digite os numeros, se enviar 1, sera mosrado o maior numero.\n");

    while (num!=1)
    {
        printf("\nDigite o numero: ");
        scanf("%d", &num);
        if (num>numMaior)
        {
            numMaior = num;
        }
        
    }

    printf("\nNumero maior: %d", numMaior);

    return 0;
}