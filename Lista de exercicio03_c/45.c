/* Exercicio 45: Sistema de Notas
*/

#include <stdio.h>

#define MAX_ALUNOS 50

int main() {
    float notas[MAX_ALUNOS];
    int n, i;
    float soma = 0, media, maior, menor;
    int aprovados = 0;

    printf("Quantos alunos tem na turma (max %d)? ", MAX_ALUNOS);
    scanf("%d", &n);

    if (n > MAX_ALUNOS || n <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

 
    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        
    
        if (notas[i] < 0 || notas[i] > 10) {
            printf("Nota invalida (0-10). Digite novamente.\n");
            i--; 
        }
    }


    maior = notas[0];
    menor = notas[0];

    for (i = 0; i < n; i++) {
        soma += notas[i];

        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] >= 7.0) aprovados++;
    }

    media = soma / n;


    printf("\n--- RELATORIO DA TURMA ---\n");
    printf("Media da Turma: %.2f\n", media);
    printf("Maior Nota: %.2f\n", maior);
    printf("Menor Nota: %.2f\n", menor);
    printf("Total de Aprovados: %d (%.1f%%)\n", aprovados, (float)aprovados/n * 100);

    return 0;
}