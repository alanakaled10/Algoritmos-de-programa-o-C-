#include <stdio.h>
int main(){
    
    int linha,par=2;
    printf("Digite o numero de linha do triangulo: ");
    scanf("%d", &linha);
    
    for (int i = 1; i <= linha; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", par);
            par+=2; 
        }   
        
        printf("\n");
        
    }
    
    
    return 0;
}