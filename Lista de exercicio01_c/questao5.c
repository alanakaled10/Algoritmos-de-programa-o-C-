//Conversão de Temperatura
#include <stdio.h>
int main(){
    
    int tempFahrenheit, tempCelsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &tempCelsius);

    tempFahrenheit = (tempCelsius*9/5)+32;

    printf("A temperatura %d Celsius em Fahrenheit e: \n%d ->Fahrenheit", tempCelsius, tempFahrenheit);
    
    return 0;
}