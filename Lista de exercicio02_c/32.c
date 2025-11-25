/*Ângulos do Triângulo*/

#include <stdio.h>
int main()
{

    int angulo1, angulo2, angulo3;
    printf("Digite o angulo 1: ");
    scanf("%d", &angulo1);
    printf("Digite o angulo 2: ");
    scanf("%d", &angulo2);
    printf("Digite o angulo 3: ");
    scanf("%d", &angulo3);

    while (angulo1+angulo2+angulo3<180)
    {
        printf("Triangulo invalido! \nDigite os angulos novamente: ");
        scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
    }
    

    if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
    {
        printf("\nTriangulo Actangulo\n\nDefinicao: \n-> Possui todos os seus tres angulos internos com medidas inferiores a 90 graus.");
    }
    else if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
    {
        printf("\nTriangulo Retangulo\n\nDefinicao: \n-> Possui um dos angulos internos com medida igual a 90 graus (um angulo reto).");
    }
    else
    {
        printf("\nTriangulo Obtusangulo\n\nDefinicao: \n-> Apresenta um dos seus angulos internos com medida superior a 90 graus (um angulo obtuso).");
    }

    return 0;
}