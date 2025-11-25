/*Conversao Decimal para Binario*/

#include <stdio.h>

int main() {
    int decimal, i;
    int binario[32]; 
    int indice = 0; 

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);


    if (decimal == 0) {
        printf("Binario: 0\n");
        return 0;
    }

    int temp = decimal;
    while (temp > 0) {
        temp = temp / 2;            
        indice++;
    }

    printf("O numero %d em Binario e: ", decimal);
    

    for (i = indice - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");

    return 0;
}