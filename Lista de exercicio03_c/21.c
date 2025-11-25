/*Fatorial*/

#include <stdio.h>

int main()
{

    int num, fatorial=1;

    printf("Digite o numero ara saber seu fatorial: ");
    scanf("%d", &num);

    while (num<0)
    {
        printf("Nao existe fatorial de um numero negativo.\n");
        printf("Digite outro numero: ");
        scanf("%d", &num);
    }
    

    for (int i = 1; i < num; num--)
    {
        fatorial *= num;
    }

    printf("Fatorial: %d", fatorial);

    return 0;
}