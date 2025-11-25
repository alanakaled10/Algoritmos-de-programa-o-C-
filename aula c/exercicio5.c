#include <stdio.h>
int main(){
    
    float num;
    float numPorcent;
    printf("digite um numero: ");
    scanf("%f", &num);
    numPorcent = num * 0.4;
    printf("O valor digitado foi: %.2f\n4 porcento do valor que voce digitou e: %.2f", num,  numPorcent);

    return 0;
}