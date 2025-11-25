/*Área do Círculo Condicional*/

#include <stdio.h>
#include <math.h>
int main()
{

    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    if (raio > 0)
    {
        area = 3.14 * pow(raio, 2);

        printf("\n===== Area: %.2f =====", area);
    }
    else{
        printf("\nERRO!");
    }

    return 0;
}