/*Área e Perímetro do Quadrado*/

#include <stdio.h>
int main()
{

    float lado, area, perimetro;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    /*Teste para tentar fazer um quadrado*/
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            /* imprime * apenas nas bordas*/
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                printf("* ");
            else
                printf("  "); /*espaço vazio dentro*/
        }
        printf("\n");
    }

    printf("Area: %.2f \nPerimetro: %.2f\n", area, perimetro);

    return 0;
}