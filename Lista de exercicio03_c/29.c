/*Validação Complexa*/

#include <stdio.h>

int main(){

    int entrada;

    printf("O codigo tem que ser \n->Par \n->Positivo \n->Menor que 100\n");

    do
    {
        printf("Digite o codigo: ");
        scanf("%d", &entrada);
    } while (entrada % 2 != 0 || entrada < 0 || entrada >= 100);
    
    printf("CORRETO!");

    return 0;
}