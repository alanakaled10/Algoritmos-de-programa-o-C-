/*Velocidade Média Complexa*/

#include <stdio.h>
int main(){
    
    float distancia1, tempo1, distancia2, tempo2,  velocidadeMedia1,veocidadeMedia2;
    printf("Digite a distacia 1 percorrida (Km): ");
    scanf("%f", &distancia1);
    printf("Digite o tempo gasto (Hora): ");
    scanf("%f", &tempo1);
    printf("Digite a distacia 2 percorrida (Km): ");
    scanf("%f", &distancia2);
    printf("Digite o tempo gasto (Hora): ");
    scanf("%f", &tempo2);

    velocidadeMedia1 = distancia1/tempo1;
    veocidadeMedia2 = distancia2/ tempo2;

    printf("\n===== RESULTADO ===== \nVelocidade Media 1: %.2f \nVelocidade Media 2: %.2f", velocidadeMedia1, veocidadeMedia2);
    
    return 0;
}