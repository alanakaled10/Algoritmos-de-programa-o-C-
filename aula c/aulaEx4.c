#include <stdio.h>
int main(){
    
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1%2==0 && num2%2==0)
    {
        printf("Abos os numeros sao pares ");

    }else if (num1%2==0 || num2%2==0)
    {
        printf("Um dos numeros e par");
    }
    else
    {
        printf("Nenhum dos numeros e par");
    }
    
  
    
    return 0;
}