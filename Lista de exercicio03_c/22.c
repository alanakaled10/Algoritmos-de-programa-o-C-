/*Números Primos*/

#include <stdio.h>

int main(){

    int num, contador = 0;

    printf("Digite um numero e saiba se ele e primo ou nao: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        if (num%i == 0)
        {
            contador++;
        }
        
    }

    if (contador>2)
    {
        printf("O numero nao e primo. ");
    }else
    {
        printf("O numero e primo. ");
    }
    
    
    

    return 0;
}