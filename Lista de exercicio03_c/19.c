/*Calculadora Básica*/

#include <stdio.h>

int main()
{

    float num1, num2;
    int continuar;
    char operador;
    printf("_____ Calculadora Basica ______\n");
    printf("Digite: \n '+' -> Adicao \n '-' -> Subtracao \n '*' -> Multiplicacao \n '/' -> Divisao \n");
    do
    {
        printf("\nDigite qual operacao deseja realizar: ");
        scanf(" %c", &operador);
        switch (operador)
        {
        case '+':
            printf("\nDigite dois numeros para realizar a operacao: ");
            scanf("%f %f", &num1, &num2);
            printf("\n%.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("\nDigite dois numeros para realizar a operacao: ");
            scanf("%f %f", &num1, &num2);
            printf("\n%.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("\nDigite dois numeros para realizar a operacao: ");
            scanf("%f %f", &num1, &num2);
            printf("\n%.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
            break;

        case '/':
            printf("\nDigite dois numeros para realizar a operacao: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0)
            {
                printf("\nErro: Divisao por zero nao permitida!\n");
            }
            else
            {
                printf("\n%.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
            }
            break;

        default:
            printf("\nOperador invalido!");
            break;
        }

        printf("Deseja continuar? (0) Continuar, (1) Sair\n");
        scanf("%d", &continuar);

        if (continuar < 0 || continuar > 1)
        {
            printf("ERRO! \nDigite 0 para continuar ou 1 para sair: ");
            scanf("%d", &continuar);
            continue;
        }

    } while (continuar == 0);

    printf("Saindo...");

    return 0;
}