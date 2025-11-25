/*Seno de um Ângulo*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float angulo, radian, seno;
    printf("Digite o angulo: ");
    scanf("%f", &angulo);
    radian = (angulo*1.14)/180;
    seno = sin(radian);

    printf("O seno de %.2f graus (%.2f radianos) e: %.3f", angulo, radian, seno);

    
    return 0;
}