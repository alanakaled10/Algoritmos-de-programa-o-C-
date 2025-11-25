/*Senha Simples*/

#include <stdio.h>

int main(){

    int senha, senhaCorreta = 1234;
    do
    {
        printf("\nDigite a senha (1234):\n");
        scanf("%d", &senha);
    } while (senha!=senhaCorreta);
    
    printf("\nUsuario conectado!");

    return 0;
}