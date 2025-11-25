/*Conversão de Temperatura com Validação ºF = (ºC x 9/5) + 32 */

#include <stdio.h>
int main(){
    
    float temCelsius, tempFahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temCelsius);

    if (temCelsius >= -273 && temCelsius<=1000)
    {
        tempFahrenheit = (temCelsius * 9/5) + 32;
        printf("%.2fC e %.2f Fahrenheit", temCelsius, tempFahrenheit);
    }
    else
    {
        printf("Erro!");
    }
    
    
    return 0;
}