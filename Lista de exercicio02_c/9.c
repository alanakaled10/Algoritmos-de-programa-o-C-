/*Maior entre Dois*/

#include <stdio.h>
int main(){
    
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1>num2)
    {
        printf("O numero %.2f e o maior numero!", num1);
    }
    else
    {
        printf("O numero %.2f e o maior numero!", num2);
    }
    

    return 0;
}