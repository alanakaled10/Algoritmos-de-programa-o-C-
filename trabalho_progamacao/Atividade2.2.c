#include <stdio.h>
#include <stdlib.h>
int main()
{
    int menu;
    char musicas[5][50] = {
        "Imagine - John Lennon",
        "Bohemian Rhapsody - Queen",
        "Hotel California - Eagles",
        "Por que ele vive - Corinho Harpa crista",
        "Lugar Secreto - Gabriela Rocha"};
    printf("=== MINHA PLAYLIST ===\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, musicas[i]);
        
    }
    printf("Digite o numero da musica que voce quer ouvir (1-5): ");
    scanf("%d", &menu);
    system("cls");

    switch (menu)
    {
    case 1:
        printf("====== Musica escolhida ======\n");
        printf("1 - %s", musicas[0]);
        break;

    case 2:
        printf("====== Musica escolhida ======\n");
        printf("2 - %s", musicas[1]);
        break;

    case 3:
        printf("====== Musica escolhida ======\n");
        printf("3 - %s", musicas[2]);
        break;

    case 4:
        printf("====== Musica escolhida ======\n");
        printf("4 - %s", musicas[3]);
        break;

    case 5:
        printf("====== Musica escolhida ======\n");
        printf("5 - %s", musicas[4]);
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;
}