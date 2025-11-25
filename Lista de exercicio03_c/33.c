/*Pirâmide de Números*/

#include <stdio.h>

int main(){

    int linha;

    printf("Digite a quatidade de linhas que a piramede tera: ");
    scanf("%d", &linha);

    for (int i = 1; i <= linha; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    

    return 0;
}