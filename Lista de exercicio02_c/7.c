/*Número Negativo ou Não Negativo*/

#include <stdio.h>
int main(){
    
        int num;
    printf("Digite o numero: ");
    scanf("%d", &num);

    if (num<0)
    {
        printf("O numero negativo", num);
    }
    else
    {
        printf("O numero nao negativo", num);
    }
    
    return 0;
}