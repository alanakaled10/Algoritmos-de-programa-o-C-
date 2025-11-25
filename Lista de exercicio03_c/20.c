/*Contador de Tentativas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, contador=0, numUsuario;

    printf("***** Tente acertar o numero *****\n");

    srand(time(NULL));
    num = rand () % 10 + 1;

    do
    {
        printf("\nDigite um numero (1-10): ");
        scanf("%d", &numUsuario);
        while (numUsuario < 1 || numUsuario > 10)
        {
            printf("Digite um numero entra 1-10: ");
            scanf("%d", &numUsuario);
            
        }
        
        if (numUsuario<num)
        {
            printf("\n### Chute um numeroo mais alto! ###\n");
        }
        else if(numUsuario>num)
        {
            printf("\n### Chute um numero mais baixo! ###\n");
        }
        
        
        contador ++;
    } while (num != numUsuario);
    
    printf("\nVoce acertou! \nNumero -> %d \nTentativas -> %d", num, contador);

    return 0;
}