/*Calculadora Simples*/

#include <stdio.h>
int main()
{

    float num1, num2;
    char operacao;
    printf("Digite a operacao que deseja realizar (+, -, *, /): ");
    scanf("%c", &operacao);
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao)
    {
    case '+':
        printf("\nOperacao: %c \n%.2f + %.2f = %.2f", operacao, num1, num2, num1 + num2);
        break;

    case '-':
        printf("\nOperacao: %c \n%.2f - %.2f = %.2f", operacao, num1, num2, num1 - num2);
        break;

    case '*':
        printf("\nOperacao: %c \n%.2f * %.2f = %.2f", operacao, num1, num2, num1 * num2);
        break;

    case '/':
        if (num1==0 || num2==0)
        {
            printf("Erro, numero igual a zero.");
        }
        else
        {
            printf("\nOperacao: %c \n%.2f / %.2f = %.2f", operacao, num1, num2, num1 / num2);
        }
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}