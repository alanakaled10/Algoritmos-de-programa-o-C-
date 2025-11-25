#include <stdio.h>
int main(){
    
    int menu;
    float notaFinal, frequencia;
    printf("1. Verificar se o aluno foi aprovado \n2. Sair\n\nDigite uma opcao: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Digite  a nota final (de 0 a 10): ");
        scanf("%f", &notaFinal);
        printf("Digite a frequencia (porcentagem de presenca, de 0 a 100): ");
        scanf("%f", &frequencia);

        if (notaFinal>=7 && frequencia>=75 )
        {
            printf("\nAluno aprovado!");
        }
        else
        {
            printf("Aluno reprovado!");
        }
        break;

    case 2:
        printf("Programa encerrado.");
        break;
    
    default:
        printf("Opcao invalida!");
    }
    
    return 0;
}