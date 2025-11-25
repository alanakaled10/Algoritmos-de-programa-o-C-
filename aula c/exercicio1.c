#include <stdio.h>
int main(){
    
    float a, b, c, x;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);
    x= 2*((a-c)/8)-b*5;
    printf("O resultado da operacao : x=2*((a-c)/8)-b*5 e:\n %.2f", x);

    
    return 0;
}