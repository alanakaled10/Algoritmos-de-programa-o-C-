/*Calculadora de IMC*/

#include <stdio.h>
int main(){
    
    float peso, altura, imc;
    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("Seu IMC e: %.2fkg/m²", imc);
    
    return 0;
}