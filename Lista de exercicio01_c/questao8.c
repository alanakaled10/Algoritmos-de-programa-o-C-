/*Troco da compra*/

#include <stdio.h>
int main(){
    
    float valorCompra, valorPago, troco;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite o valor pago: ");
    scanf("%f", &valorPago);

    troco = valorPago-valorCompra;

    printf("--------------\nTroco: R$%.2f", troco);
    
    return 0;
}