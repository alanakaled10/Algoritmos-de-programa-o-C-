#include <stdio.h>
#include <stdlib.h>
int main()
{
    int notas[5];
    int teste, notaMaior, notaMenor;

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

        system("cls"); 
    }
    printf("Notas: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ", notas[j]);
    }

    printf("\nNota maior: %d\n", notaMaior);
    printf("Nota menor: %d\n", notaMenor);

    return 0;
}