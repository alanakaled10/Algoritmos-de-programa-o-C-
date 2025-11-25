/*Categoria por Idade*/

#include <stdio.h>
int main(){
    
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade<12)
    {
        printf("Crianca");
    }
    else
    {
        printf("Nao e crianca");
    }
    
    return 0;
}