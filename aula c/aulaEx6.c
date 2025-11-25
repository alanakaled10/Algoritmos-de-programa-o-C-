/*Arredondar numero*/
#include <stdio.h>
#include <math.h>
int main(){
    
    float num;
    int arredondadoFloor, arredondadoceil, arredondadoround; 

    printf("Digite um numero decimal: ");
    scanf("%f", &num);
    arredondadoFloor = floor(num);
    arredondadoceil = ceil (num);
    arredondadoround = round (num);

    printf("Numero arredondado com a funcao floor: %d \nNumero arredondado com a funcao ceil: %d \nNumero arredondado com a funcao round: %d \n", arredondadoFloor, arredondadoceil, arredondadoround);
    
    return 0;
}