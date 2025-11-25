#include <stdio.h>
int main(){
    
    int linha;
    printf("Digite o numero de linha do triangulo: ");
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