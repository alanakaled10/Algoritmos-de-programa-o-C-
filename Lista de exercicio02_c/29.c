/*Aposentadoria*/

#include <stdio.h>
int main(){
    
    int idade, tempContrib;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao: ");
    scanf("%d", &tempContrib);

    if (idade>=65 || tempContrib>=30 || idade+tempContrib>=95)
    {
        printf("Voce tem direito a Aposentadoria");
    }
    else
    {
        printf("Voce nao tem direito a Aposentadoria");
    }
    
    
    
    return 0;
}