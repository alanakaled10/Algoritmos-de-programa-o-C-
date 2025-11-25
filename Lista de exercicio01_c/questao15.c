/*Tempo de Viagem*/

#include <stdio.h>
int main(){
    
    float distancia, velocidadeMedia, tempo;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade media em km/h: ");
    scanf("%f", &velocidadeMedia);

    tempo = distancia/velocidadeMedia;

    printf("\nDistancia: %.2f m \nVelocidade Media: %.2f Km/h \nTempo de chegada: %.2f h", distancia, velocidadeMedia, tempo);

    return 0;
}