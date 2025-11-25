/* Retornar seno, cosceno e tangente de um ângulo*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float angulo, sen, cose, tang;
    printf("Digite o valor do angulo: ");
    scanf("%f", &angulo);
    sen = sin(angulo);
    cose = cos(angulo);
    tang = tan(angulo);
    printf("Seno: %.2f \nCosceno: %.2f \nTangente: %.2f", sen, cose, tang);
    
    return 0;
}