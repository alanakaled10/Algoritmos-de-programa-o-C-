/*Menu Simples*/

#include <stdio.h>

int main()
{

    int comando, soma, num1, num2, sub;

    while (comando != 3)
    {
        printf("\nDigite -> \n1-Somar \n2-Subtrair \n3-Sair\n");
        scanf("%d", &comando);

        if (comando == 1)
        {
            printf("Digite dois numeros para realizar a soma: \n");
            scanf("%d %d", &num1, &num2);
            soma = num1+num2;
            printf("\n->Soma: %d\n", soma);
        }
        
        else if (comando==2)
        {
            printf("Digite dois numeros para realizar a subtracao: \n");
            scanf("%d %d", &num1, &num2);
            sub = num1-num2;
            printf("\n->Subtracao: %d \n", sub);
        }

        else if (comando > 3)
        {
            printf("\n->>>ERRO!\n");
        }
        
        
    }

    printf("\nSaindo....");

    return 0;
}