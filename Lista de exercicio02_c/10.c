/*Desconto Condicional*/

#include <stdio.h>
int main(){
    
    float valor, valorDesconto;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor>100)
    {
        valorDesconto = valor*0.90;
        printf("O valor do produto com 10 por cento de desconto e: %.2f", valorDesconto);
    }
    
    
    return 0;
}