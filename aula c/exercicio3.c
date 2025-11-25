#include <stdio.h>
int main(){
    
    float raio, area, perimetro;
    float pi = 3.14159;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = pi*raio*raio;
    perimetro = 2*pi*raio;

    printf("_______RESULTADO_______\n");
    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
    
    return 0;
}