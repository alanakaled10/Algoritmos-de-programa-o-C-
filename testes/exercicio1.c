//Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. 
//Em seguida, exiba essas informações na tela.

#include <stdio.h>
int main(){
    char nome[30];
    int idade;
    int qntGols;

    printf("Digite o nome do jogador:\n");
    scanf("%s", &nome);
    printf("Digite a idade do jogador: \n");
    scanf("%d", &idade);
    printf("Digite uantidade de gols que ele já fez na carreira: \n");
    scanf("%d", &qntGols);
    
    printf("____________INFORMACOES DO JOGADOR____________ \n ");
    printf("Nome: %s \n ------------------------- \n", nome);
    printf("Idade:%d \n ------------------------- \n", idade);
    printf("Quantidade de gols feitos na carreira: %d \n ------------------------- \n", qntGols);
    
    
    
    return 0;
    

}