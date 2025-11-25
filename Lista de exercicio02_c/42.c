#include <stdio.h>
int main(){

    char nome[50];
    float nota1, nota2, nota3, nota4, media;
    int frenquencia, trabEntregue, qntdTrabalho, totalAulas;

    printf("Nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota4);

    printf("\nTotal de aulas: ");
    scanf("%d", &totalAulas);

    printf("\nDigite a frequencia do aluno %s: ", nome);
    scanf("%d", &frenquencia);

    printf("\nDigite a quatidade de trabalhos passados: ");
    scanf("%d", &qntdTrabalho);

    printf("\nDigite a quatidade de trabalhos entregues pelo aluno %s: ", nome);
    scanf("%d", &trabEntregue);

    media = ((nota1*3) + (nota2*2) + (nota3*4) + (nota4*3))/(3+2+4+3);

    printf("\nCriterios para Aprovacao \n-> Notas maior ou igual a 6 \n-> Presenca maior que 75%%");
    
    if (media<6 || frenquencia<totalAulas*0.75)
    {
        printf("\nAluno Reprovado!\n");
        printf("\n----------------------\nAluno: %s \nMedia: %.2f \nAulas Ministradas: %d \nFrequencia do Aluno: %d \nTrabalhos Passados: %d \nTrabalhos Entregues: %d", nome, media, totalAulas, frenquencia, qntdTrabalho, trabEntregue);
    }
    else
    {
        printf("\nAluno Aprovado!\n");
        printf("\n----------------------\nAluno: %s \nMedia: %.2f \nAulas Ministradas: %d \nFrequencia do Aluno: %d \nTrabalhos Passados: %d \nTrabalhos Entregues: %d", nome, media, totalAulas, frenquencia, qntdTrabalho, trabEntregue);
    }
    
    

    return 0;
}