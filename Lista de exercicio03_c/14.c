/*Divisão Sucessiva*/

#include <stdio.h>

int main(){

    float num;
    int contador=0;
    printf("**** Programa **** \nDivide um numero por 2 ate que seja menor que 1, contando as divisoes. ");

    printf("\nDigite um numero: ");
    scanf("%f", &num);

    while (num>1)
    {
        num/=2;
        contador++;
    }
    
    printf("\nREDULTADO->%.2f \nNumero de divisoes: %d", num, contador);

    return 0;
}