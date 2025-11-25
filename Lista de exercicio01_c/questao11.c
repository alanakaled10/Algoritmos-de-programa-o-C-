/*Operações Matemáticas*/

#include <stdio.h>
int main(){
    
    float num1, num2, add, sub, mult, divi;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    add = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    divi = num1/num2; 

    printf("- - - - - - - - - - - - - - - - - - \nResultado das operacoes: +, -, ×, ÷ \nAdicao: %.2f\nSubitracao: %.2f\nMultiplicacao: %.2f \nDivisao: %.2f \n- - - - - - - - - - - - - - - - - - ", add, sub, mult, divi);
    
    return 0;
}