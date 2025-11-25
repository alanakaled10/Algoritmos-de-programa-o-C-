//Perímetro do Círculo
#include <stdio.h>
int main(){
    
    float raio,perimetro;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    perimetro = 2*3.14159*raio;

    printf("O perimetro do circulo e aproximadamente: %.2f", perimetro);
    
    return 0;
}