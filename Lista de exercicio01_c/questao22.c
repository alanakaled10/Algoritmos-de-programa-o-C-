/*Calculadora de Parcelas*/

#include <stdio.h>
int main(){
    
    float valor, numParclas, valorParcela;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite o numero de parcelas: ");
    scanf("%f", &numParclas);

    valorParcela = valor/numParclas;

    printf("\n======Valor de cada parcela sem juros======\n R$%.2f", valorParcela);
    
    return 0;
}