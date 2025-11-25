/*Menu com DO-WHILE*/

#include <stdio.h>

int main(){

    int comando;

    do
    {
        printf("\n1-Somar \n2-Subtrair \n3-Sair\n");
        printf("digite uma opcao: ");
        scanf("%d", &comando);

        if (comando==1)
        {
            printf("\n++++ SOMA ++++\n");
        }
        else if (comando==2)
        {
            printf("\n---- SUBTRACAO ----\n");
        }
        else if (comando>3 || comando==0)
        {
            printf("\n#### ERRO! ####\n");
        }
        
        
        

    } while (comando!=3);

    printf("\nSaindo...");
    

    return 0;
}