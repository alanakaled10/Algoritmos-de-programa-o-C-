/*Conversão de Moedas*/

#include <stdio.h>
int main(){
    
    float real, cotacaoDolar, dolares;
    printf("Digite o valo em real R$: ");
    scanf("%f", &real);
    printf("Digite a cotacao em dolar $: ");
    scanf("%f", &cotacaoDolar);

    dolares = real/cotacaoDolar;

    printf("\n======TABELA DE CONVERSAO====== \n\n Valor em real -> %.2f R$\n Cota do dolar %.2f $ \nValor em dolar %.2f $", real, cotacaoDolar, dolares);
    
    return 0;
}