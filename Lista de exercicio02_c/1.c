/*Número Positivo*/

#include <stdio.h>
int main(){
    
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);

    if (num<0)
    {
        printf("O numero %d e negativo", num);
    }
    else
    {
        printf("O numero %d e positivo", num);
    }
    
    
    
    return 0;
}