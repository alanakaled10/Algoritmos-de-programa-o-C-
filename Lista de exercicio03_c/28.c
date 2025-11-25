/*Sistema de Login*/

#include <stdio.h>

int main(){

    char usuario ='usuario', usuarioNav[20];
    int senha = 654321;
    int senhaNav;
    int tentativas = 0;

    while (usuario!=usuarioNav)
    {
        while (tentativas<=3)
        {
            printf("Usuario: ");
            scanf(" %[^\n]", usuarioNav);

            printf("Senha: ");
            scanf("%d", &senhaNav);
            tentativas++;
        }
        printf("Tentativas encerradas");
    }
    
    printf("Entrando");



    return 0;
}