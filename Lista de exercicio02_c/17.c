/*Equação do 2º Grau*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float a, b, c, equacao, raiz;
    printf ("Digite o valor de a: ");
    scanf("%f", &a);
    printf ("Digite o valor de b: ");
    scanf("%f", &b);    
    printf ("Digite o valor de c: ");
    scanf("%f", &c);

    equacao = b*b -4*a*c;
    if (equacao >0)
    {
        raiz = sqrt(equacao);
        printf("Possui raizes reais %.2f", raiz);
    }
    else
    {
        printf("nao possui raiz real");
    }
       

    return 0;
}