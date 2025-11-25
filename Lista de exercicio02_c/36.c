/*Classificação Completa de Triângulo*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14
int main(){

    int lado1, lado2, lado3;
    double a2, b2, c2, anguloA_rad, anguloB_rad, anguloC_rad, anguloC_graus, anguloB_graus, anguloA_graus;

    printf("Digite tres lados de um triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    system("cls");

    while (lado1+lado2<lado3 || lado2+lado3<lado1 || lado1 + lado3 < lado2)
    {
        printf("Triangulo invalido! \nDigite os lados novamente: ");
        scanf("%d %d %d", &lado1, &lado2, &lado3);
        system("cls");
    }

    a2 = pow(lado1, 2);
    b2 = pow(lado2, 2);
    c2 = pow(lado3, 2);

    anguloA_rad = acos((b2 + c2 - a2) / (2 * lado2 * lado3));
    anguloB_rad = acos((a2 + c2 - b2) / (2 * lado1 * lado3));
    anguloC_rad = acos((a2 + b2 - c2) / (2 * lado1* lado2));

    anguloA_graus = anguloA_rad * 180/PI;
    anguloB_graus = anguloB_rad * 180/PI;
    anguloC_graus = anguloC_rad * 180/PI;

    if (fabs(anguloA_graus - 90.0) < 0.01 || fabs(anguloB_graus - 90.0) < 0.01 || fabs(anguloC_graus - 90.0) < 0.01) 
    {
        printf("Classificacao por angulos: Retangulo\n");
    } 
    
    else if (anguloA_graus > 90.0 || anguloB_graus > 90.0 || anguloC_graus > 90.0) 
    {
        printf("Classificacao por angulos: Obtusangulo\n");
    } 
    
    else {
        printf("Classificacao por angulos: Acutangulo\n");
    }

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("\nClassificado por lados: Trangulo equilatero \n");  
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 4 - i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }   
    }

    else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2)
    {
        printf("\nClassificado por lados: Triangulo Isoscelis \n");
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 4 - i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }

    }

    else
    {
        printf("\nClassificado por lados: Triangulo escaleno \n");
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }
        
    }

    return 0;
}