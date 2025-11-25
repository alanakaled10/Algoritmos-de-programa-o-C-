/*Conversão de Metros*/

#include <stdio.h>
int main(){
    
    float distancia, cm, km, mm;
    printf("Digite a distancia em metros: ");
    scanf("%f", &distancia);

    cm = distancia*100;
    km = distancia/1000;
    mm  = distancia*1000;

    printf("\nDistancia em: \nMetros: %.2fm \nCentimetros: %.2fcm \nQuilometros: %.3fkm \nMilimetros: %.2fmm\n", distancia, cm, km, mm);
    
    return 0;
}