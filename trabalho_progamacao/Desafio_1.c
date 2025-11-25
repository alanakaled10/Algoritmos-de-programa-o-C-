#include <stdio.h>
#include <stdlib.h>
int main()
{
    int notas[5];
    int notaMaior, notaMenor;
    int aprovados = 0, recuperacao = 0, reprovado = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);

        if (i == 0)
        {
            notaMaior = notas[i];
            notaMenor = notas[i];
        }
        else
        {

            if (notas[i] > notaMaior)
                notaMaior = notas[i];

            if (notas[i] < notaMenor)
                notaMenor = notas[i];
        }

        if (notas[i] >= 7)
        {
            aprovados++;
        }

        else if (notas[i]>=5)
        {
            recuperacao++;
        }
        else
        {
            reprovado++;
        }
        
        
        

        system("cls"); 
    }
    printf("Notas: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ", notas[j]);
    }

    printf("\n\nNota maior: %d\n", notaMaior);
    printf("Nota menor: %d\n", notaMenor);
    printf("Alunos aprovados: %d\n", aprovados);
    printf("Alunos em recuperacao: %d\n", recuperacao);
    printf("Alunos reprovados: %d\n", reprovado);

    return 0;
}