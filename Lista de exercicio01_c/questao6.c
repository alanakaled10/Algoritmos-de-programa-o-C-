//Média de Três Notas
#include <stdio.h>
int main(){
    
    float nota1, nota2, nota3, media;
    printf("Digite a nota um do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a nota dois do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a nota tres do aluno: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("__________________\nNotas do aluno: \n-------------------\nNota 1: %.2f \n-------------------\nNota 2: %.2f \n-------------------\nNota 3: %.2f \n-------------------\nMedia: %.2f\n__________________", nota1, nota2, nota3, media);
    
    return 0;
}
