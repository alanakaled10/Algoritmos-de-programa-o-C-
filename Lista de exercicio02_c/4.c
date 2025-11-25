/*Raiz Quadrada Válida*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float num, raiz;
    printf("Digite um numero positivo: ");
    scanf("%f", &num);

    if (num>=0)
    {
        raiz = sqrt(num);
        printf("A raiz quadrada do numero %.2f e: %.2f", num, raiz);
    }
    else
    {
        printf("O numero que voce digitou e negativo, sua raiz e invalida!");
    }
    
    
    return 0;
}