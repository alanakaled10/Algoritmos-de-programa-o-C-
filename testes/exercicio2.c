#include <stdio.h>
int main(){
    
    int qntGols, qntPartidas;
    float media; 
    printf("Digite a quantidade de Gols do jogador: ");
    scanf("%d", &qntGols);
    printf("Digite a quantidade de partidas que o jogador participou: ");
    scanf("%d", &qntPartidas);
    media = (float) qntGols/qntPartidas;
    printf("O jogador fez %d gols, durante %d partidas.\nPortanto, sua media de gols por partida e:\n%.2f",
         qntGols, qntPartidas, media);
         
    return 0;
}
