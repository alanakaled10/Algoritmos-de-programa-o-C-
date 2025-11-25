/*Números Pares*/

#include <stdio.h>

int main()
{

    printf("======= Numeros pares =======\n");

    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}