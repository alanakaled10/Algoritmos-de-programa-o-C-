/*Juros Simples*/

#include <stdio.h>
int main(){
    
    float capInicial, taxaJuros, tempo, jurosSimples;
    printf("Digite o capital inicial: ");
    scanf("%f",&capInicial);
    printf("Digite a taxa de juros em porcentagem: ");
    scanf("%f",&taxaJuros);
    printf("Digite o tempo em meses: ");
    scanf("%f",&tempo);

    taxaJuros = (taxaJuros/100);
    jurosSimples = capInicial*taxaJuros*tempo;

    printf("Juros Simpes: R$%.2f", jurosSimples);

    return 0;
}