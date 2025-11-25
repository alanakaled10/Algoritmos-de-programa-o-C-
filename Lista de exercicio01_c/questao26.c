/*Equação do Primeiro Grau*/

#include <stdio.h>
int main(){
    
    float a, b, x;
    printf("Digite o valor de A e logo apos o valor de B: ");
    scanf("%f %f", &a, &b);
    
    x=-b/a;

    printf("===== Equacao ax + b = 0 ===== \nValor de x (x = -%.2f/%.2f :\n%.2f", b, a, x);

    return 0;
}