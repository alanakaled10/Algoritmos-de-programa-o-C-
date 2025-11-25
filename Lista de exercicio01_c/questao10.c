/*Desconto no Produto*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float preco, desconto, precoFinal;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    precoFinal = fabs( preco*((desconto/100)-1) );

    printf("_________________________\n");
    printf("Valor do produto: %.2fR$ \nValor do produto com desconto: %.2fR$", preco, precoFinal);

    return 0;
}