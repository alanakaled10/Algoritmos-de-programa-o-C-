/*Potência de 2*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float num, numElevado;
    printf("Digite um numero: ");
    scanf("%f", &num);

    numElevado = pow(2,num);

    printf("O numero 2 elavado ao numero %.2f e: %.2f", num, numElevado);
    
    return 0;
}