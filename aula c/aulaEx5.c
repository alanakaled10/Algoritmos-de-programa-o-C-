#include <stdio.h>
#include <math.h>
int main(){
    
    int numx, numy, potencia;
    printf("Operacao: x^y \n----------------------- \nDigite o x que equivale a base da operacao: ");
    scanf("%d",&numx);
    printf("Digite o y que equivale a base da operacao: ");
    scanf("%d",&numy);

    potencia = pow(numx,numy);

    printf("A potencia entre %d e %d e: %d", numx, numy, potencia);
    
    return 0;
}