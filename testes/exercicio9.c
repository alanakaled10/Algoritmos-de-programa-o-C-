#include <stdio.h>
int main(){
    
    int idade, qntdGols;
    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);
    printf("Digite a quantidade de gols marcados: ");
    scanf("%d", &qntdGols);

    if (idade<=20)
    {
        if (qntdGols>10)
        {
            printf("Jovem talento promissor!");
        }
        else
        {
            printf("Jovem em desenvolvimento.");
        }
        
    }
    else
    {
        if (qntdGols>15)
        {
            printf("Jogador experiente em gols!");
        }
        else
        {
            printf("Estevao");
        }
        
    }
    
    
    
    return 0;
}