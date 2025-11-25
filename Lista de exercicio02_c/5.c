/*Valor Absoluto*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float num, numAbs;
    printf("Digite um numero: ");
    scanf("%f", &num);

    numAbs = fabs(num);

    printf("O valor absoluto de %.2f e: %.2f", num, numAbs);
    
    return 0;
}