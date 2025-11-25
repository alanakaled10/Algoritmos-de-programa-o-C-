#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[5][3];

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d\n", i+1);
        printf("Nota 1: ");
        scanf("%d", &matriz[i][0]);

        printf("Nota 2: ");
        scanf("%d", &matriz[i][1]);

        matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2;
        system("cls");
    }
    

    printf("====== NOTAS ======\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Nota 1: %d\n", matriz[i][0]);
        printf("Nota 2: %d\n", matriz[i][1]);
        printf("Media: %d\n", matriz[i][2]);
        printf("\n");
    }

    return 0;
}