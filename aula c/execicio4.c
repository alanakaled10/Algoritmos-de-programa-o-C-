#include <stdio.h>
int main(){
    
    int idade, dias;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    dias = idade*365;
    printf("O numero de dias vividos aproximadamente e: %d", dias);
    
    return 0;
}