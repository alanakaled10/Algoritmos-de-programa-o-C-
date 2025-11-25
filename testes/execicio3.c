//Conversão de minutos para tempo de jogo
#include <stdio.h>
int main(){
    
    int qntMin, horas, min;
    printf("Digite o tempo do jogo em MINUTOS: ");
    scanf("%d", &qntMin);
    horas=qntMin/60;
    min = qntMin%60;
    printf("%dh:%dmin", horas, min);
    

   return 0;
}