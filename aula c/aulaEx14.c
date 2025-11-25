#include <stdio.h>
int main(){
    
    char conceito;
    printf("====CONCEITOS E SEUS SIGNIFICADOS==== \nA = Exelente \nB = Bom \nC = Regular \nD = Reprovado\n");
    printf("Digite o conceito do aluno:  ");
    scanf("%c", &conceito);
    switch (conceito)
    {
    case 'a':
    case 'A':
        printf(" A = Exelente\n");
        break;
    
    case 'b':
    case 'B':
        printf(" B = Bom\n");
        break;

    case 'c':
    case 'C':
        printf(" C = Regular\n");
        break;

    case 'd':
    case 'D':
        printf(" D = Reprovado\n");
        break;

    
    default:
        printf("Informacao invalida!");
        break;
    }
    
    return 0;
}