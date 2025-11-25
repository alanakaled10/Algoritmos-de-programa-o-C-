/*Jogo de Dados Triplo*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

    int dado1, dado2, dado3;
    srand(time(NULL));

    dado1 = rand () % 6+1;
    dado2 = rand () % 6+1;
    dado3 = rand () % 6+1;

    if (dado1 == dado2-1 && dado2 == dado3-1)
    {
        printf("Os dados formam uma sequencia \nDado 1 -> %d \nDado 2 -> %d \nDado 3 -> %d", dado1, dado2, dado3);
    }
    else if (dado1 == dado2 && dado2 == dado3)
    {
        printf("Os dados sao iguais \nDado 1 -> %d \nDado 2 -> %d \nDado 3 -> %d", dado1, dado2, dado3);
    }
    else if (dado1%2 == 0 || dado2%2 == 0 || dado3%2 == 0)
    {
        printf("Um dos numeros dos dados e par \nDado 1 -> %d \nDado 2 -> %d \nDado 3 -> %d", dado1, dado2, dado3);
    }
    else
    {
        printf("Todos sao diferentes \nDado 1 -> %d \nDado 2 -> %d \nDado 3 -> %d", dado1, dado2, dado3 );
    }
    
    

    
    
    
    
    return 0;
}