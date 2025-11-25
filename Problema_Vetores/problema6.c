#include <stdio.h>

int main() {
    int idades[30];
    int i, soma = 0;
    int criancas = 0, adolescentes = 0, adultos = 0, idosos = 0;
    int menor_idade, maior_idade;

    printf("=== Problema 6: Analise Demografica ===\n");

    for(i = 0; i < 30; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        while(idades[i] < 0) {
            printf("Idade invalida! Digite novamente: ");
            scanf("%d", &idades[i]);
        }

        soma += idades[i];

        if(i == 0) {
            menor_idade = idades[i];
            maior_idade = idades[i];
        }

        if(idades[i] < menor_idade) menor_idade = idades[i];
        if(idades[i] > maior_idade) maior_idade = idades[i];

        if(idades[i] <= 12) criancas++;
        else if(idades[i] <= 17) adolescentes++;
        else if(idades[i] <= 59) adultos++;
        else idosos++;
    }

    printf("\n=== RESULTADOS ===\n");
    printf("Total de pessoas: 30\n");
    printf("Idade media: %.1f anos\n", soma / 30.0);
    printf("Pessoa mais jovem: %d anos\n", menor_idade);
    printf("Pessoa mais velha: %d anos\n", maior_idade);

    printf("\n--- Distribuicao Etaria ---\n");
    printf("Criancas (0-12): %d (%.1f%%)\n", criancas, (criancas/30.0)*100);
    printf("Adolescentes (13-17): %d (%.1f%%)\n", adolescentes, (adolescentes/30.0)*100);
    printf("Adultos (18-59): %d (%.1f%%)\n", adultos, (adultos/30.0)*100);
    printf("Idosos (60+): %d (%.1f%%)\n", idosos, (idosos/30.0)*100);

    return 0;
}
