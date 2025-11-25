/*Sistema de Equações*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    double a1, b1, c1;
    double a2, b2, c2;
    double D, Dx, Dy, x, y; 

    printf("======= SISTEMA DE CREMER =======");
    printf("Considere o sistema de equacao: \n");
    printf("a1x + b1y = c1 \n");
    printf("a2x + b2y = c2 \n");
    printf("\nDigite o valor a1, b1 e c1 respectivamente: ");
    scanf ("%ld %ld %ld", &a1, &b1, c1);
    printf("\nDigite o valor a2, b2 e c2 respectivamente: ");
    scanf ("%ld %ld %ld", &a2, &b2, c2);
    system("cls");

    D = a1*b2 - a2*b1;
    
    if (D!=0)
    {
        Dx = c1 * b2 - c2 * b1;
        Dy = a1 * c2 - a2 * c1;

        x = Dx / D;
        y = Dy / D;

        printf("\nO sistema tem uma solucao unica:\n");
        printf("x = %.2lf\n", x);
        printf("y = %.2lf\n", y);
    } else {
        
        printf("\nO sistema nao tem uma solucao unica (pode ser impossivel ou indeterminado).\n");
    }
    
    

    return 0;
}