/*Consumo de combustível*/

#include <stdio.h>
int main(){
    
    float distancia, qntdCombustivel, consumoMedio;
    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel consumida em Litros: ");
    scanf("%f", &qntdCombustivel);

    consumoMedio = distancia/qntdCombustivel;

    printf("________________________________\nCalculo de consumo medio (km/l):\nDistancia percorrida: %.2fKm \nQuantidade de combustivel consumida: %.2fl\nConsumo medio: %.2fKm/l", distancia, qntdCombustivel, consumoMedio);

    return 0;
}