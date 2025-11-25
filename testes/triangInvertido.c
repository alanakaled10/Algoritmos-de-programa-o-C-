#include <stdio.h>
int main(){
    
    int linha;
    printf("Digite o numero de linha do triangulo: ");
    scanf("%d", &linha);

    for (int i = linha; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    
    return 0;
}