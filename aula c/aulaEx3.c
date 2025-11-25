#include <stdio.h>
#include <math.h>
int main(){
    
    float num, raiz;
    printf("Digite um numero que nao seja menor que 0: ");
    scanf("%f", &num);
    if (num<0)
    {
        printf("Numero menor que 0! \nDigite um numero inteiro que nao seja menor que 0: ");
        scanf("%f", &num);
    }

    raiz = sqrt(num);

    printf("A raiz quadrada do numero %.2f e: %.2f", num, raiz);
    
    return 0;
}