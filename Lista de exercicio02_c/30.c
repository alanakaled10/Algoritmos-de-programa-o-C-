/*Volume da Esfera*/

#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
int main(){
    
    float raio, volume;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    if (raio>0)
    {
        volume = (4/3)*3.14*pow(raio,3);
        printf("Volume: %.2f L", volume);
    }
    else
    {
        printf("ERRO! Raio menor ou igual a zero.");
    }
    
    
    return 0;
}