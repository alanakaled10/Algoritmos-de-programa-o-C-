#include <stdio.h>
int main(){
    
    int qantNum, num, soma = 0, pegarNum = 0, contador = 0;
    float divisao;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &qantNum);

    for (int i = 0; i < qantNum; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num%2==0)
        {
            soma = soma+num;
        }
        else if(num%2 != 0)
        {
            contador++;
            pegarNum =pegarNum+num;
            
        }
        
        
    }

    divisao = (float) pegarNum/contador;
    
    printf("Soma dos numeros pares: %d \nDivisao dos numeros impares: %.2f", soma, divisao);
    
    
    return 0;
}