/*Potência Elétrica*/

#include <stdio.h>
int main(){
    
    float v, a, potencia;
    printf("Digite a Tensao em volts: ");
    scanf("%f", &v);
    printf("Digite a corrente em amperes: ");
    scanf("%f", &a);
    
    potencia = v*a;

    printf("\n=====Potencia=====\n%.2f W", potencia);

    return 0;
}