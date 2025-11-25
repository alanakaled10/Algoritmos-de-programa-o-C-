#include <stdio.h>
int main(){
    
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade < 18)
    {
        printf("Menor de idade");
    }
    else if (idade<=65)
    {
        printf("Maior de idade");
    }
    else
    {
        printf("Maior de 65 anos");
    }
    
    
    
    return 0;
}