#include <stdio.h>
int main(){
    
    int num1, num2, soma, sub, resto, mult;
    float divisao;
    printf("Digite o primeiro numro (NAO PODE SER NULO): ");
    scanf("%d", &num1);
    printf("Digite o segundo numro (NAO PODE SER NULO): ");
    scanf("%d", &num2);

    if (num1 == 0 || num2==0){
        printf("O numero nao pode ser 0, digite novamente!");
        scanf("%d", &num1);
        printf("Digite novamente o segundo numero: ");
        scanf("%d", &num2);
    }


    soma = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    divisao = (float)num1/num2;
    resto =  num1 % num2;
    

    printf("_____RESULTADO DAS OPERACOES COM OS NUMEROS: %d E %d_____\n", num1, num2);
    printf("Soma: %d \nSubtracao: %d \nMultiplicacao: %d \nDivisao: %.2f \nResto: %d", soma, sub, mult, divisao, resto);

    return 0;
}