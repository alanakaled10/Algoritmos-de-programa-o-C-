#include <stdio.h>
int main(){
    
    int anoNasc, anoAtual, idade;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNasc);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    idade = anoAtual - anoNasc;
    printf("Sua idade de acordo com os anos indicados e: %d", idade);
    
    return 0;
}