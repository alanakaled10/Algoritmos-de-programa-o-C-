/*Potências de 2*/

#include <stdio.h>
#include <math.h>

int main(){

    int potencia;

    for (int i = 1; i <= 10; i++)
    {
        potencia = pow(2,i);
        printf ("\nPotencia de 2 elevado a %d\n->%d \n", i, potencia);
    }
    

    return 0;
}