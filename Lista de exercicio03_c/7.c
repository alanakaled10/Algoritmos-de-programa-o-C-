/*Média de Notas*/

#include <stdio.h>

int main(){

    float nota, valor, media;
    int contador = 0;

    for (int i = 1; i < 5; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        contador++;
        valor+=nota;
    }

    media = (float)valor/contador;
    
    printf("Media do aluno: %.2f", media);

    return 0;
}