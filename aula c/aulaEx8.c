#include <stdio.h>
#include <math.h>
int main(){
    
    int num, quadrado, cubo;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quadrado = pow(num,2);
    cubo = pow(num,3);

    printf("O numero digitado foi: %d \nO numero ao quadrado e: %d \nO numero ao cubo e: %d", num, quadrado, cubo);

    return 0;
}