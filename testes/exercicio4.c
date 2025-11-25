#include <stdio.h>
int main(){
    
    int vitorias, empates, derrotas, pontosToltal;
    printf("Digite o numero de vitorias do time: ");
    scanf("%d", &vitorias);
    printf("Digite o numero de empates do time: ");
    scanf("%d", &empates);
    printf("Digite o numero de derrotas do time: ");
    scanf("%d", &derrotas);

    pontosToltal = (vitorias*3)+empates;

    printf("O numero total de ponto seguindo a rega: \n-----------------\nVitoria: 3 pontos \nEmpate = 1 ponto \nDerrota = 0 pontos\n-----------------\n");
    printf("TOTAL DE PONTOS: %d", pontosToltal);
    
    return 0;
}
