/*Ordem crescente*/

#include <stdio.h>
int main(){
    
    int a,b,c,valor;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        valor = a;
        a = b;
        b = valor;

    }
    if (a>c)
    {
        valor = a;
        a = c;
        c = valor;
    }
    if (b>c)
    {
        valor = b;
        b = c;
        c = valor;
    }
    
    printf("O numeros informados em ordem crescente sao: %d, %d, %d", a,b,c);
    
    
    return 0;
}