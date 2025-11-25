/*Quadrados Perfeitos*/

#include <stdio.h>
#include <math.h>

int main()
{

    int potencia;

    for (int i = 1; i <= 10; i++)
    {
        potencia = pow(i, 2);
        printf("\nPotencia de %d elevado a 2\n->%d \n", i, potencia);
    }

    return 0;
}