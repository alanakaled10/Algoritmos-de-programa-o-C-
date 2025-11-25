/*Classificação de Triângulo*/

#include <stdio.h>
int main(){
    
    int lado1, lado2, lado3;
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if (lado1 + lado2 < lado3)
    {
        printf("Triangulo invalido!");
    }
    else if (lado1 == lado2 && lado2 ==lado3)
    {
        printf("Triangulo equilatero!");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
    {
        printf("Triangulo Isoceles!");
    }
    else{
        printf("Triangulo escaleno!");
    }
    
    
    
    return 0;
}