/*Contador de Dígitos*/

#include <stdio.h>

int main(){

    int num, contador = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    while (num>=10)
    {
        contador++;
        num = num/10;
        
    }
    
    printf("Digitos no numero: %d", contador);

    return 0;
}