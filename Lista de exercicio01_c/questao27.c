/*Operadores de Atribuição*/

#include <stdio.h>
int main(){
    
    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("===== Operadores  +=, -=, *=, /= ===== \n");
    printf("+=: %.2f \n-=: %.2f \n*=: %.2f \n/=: %.2f ", num1+=num2, num1-=num2, num1*=num2, num1/=num2);
    
    return 0;
}