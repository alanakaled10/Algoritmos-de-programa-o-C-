/*Quadrado ou Raiz*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float num, quadrado, raiz;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num>=10)
    {
        quadrado = pow(num, 2);
        printf("O quadrado de %.2f e : %.2f", num, quadrado);
    }

    else
    {
        raiz = sqrt(num);
        printf("a raiz quadrada de %.2f e : %.2f", num,raiz);
    }
    
    
    
    return 0;
}