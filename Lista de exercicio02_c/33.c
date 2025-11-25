/*Bhaskara Completa*/

#include <math.h>
#include <stdio.h>
int main(){

    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a==0)
    {
        printf("Nao e equacao do segundo grau! (a=0)");
    }
    else
    {
        delta = b * b -4 * a * c;

        if (delta<0)
        {
            printf("Nao possui raizes reais!");
        }
        else if (delta == 0)
        {
            x1 = -b / (2*a);
            printf("Raiz unica: %.2f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);

            printf("Raiz 1: %.2f\nRaiz 2: %.2f", x1, x2);
        }
        
        
        
    }
    
    

    return 0;
}