#include <stdio.h>
#include <math.h>
int main(){
    
    float num1, num2, mult, raiz;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    mult= num1*num2;

    raiz = sqrt(mult);

    printf("A raiz quadrada da multiplicacao de %.2f e %.2f e: %.2f", num1, num2, raiz);
    
    return 0;
}