#include <stdio.h>

int main() {
    int manha[7], tarde[7], noite[7];
    char *dias[] = {"Seg", "Ter", "Qua", "Qui", "Sex", "Sab", "Dom"};
    int i;
    int total_manha = 0, total_tarde = 0, total_noite = 0, total_geral = 0;
    int maior_dia_prod, idx_maior_dia = 0;
    int dias_baixa_prod = 0;

    printf("=== Problema 7: Controle de Producao ===\n");
    
    printf("Digite a producao diaria (7 dias) do turno MANHA:\n");
    for(i=0; i<7; i++) { 
        printf("%s: ", dias[i]); 
        scanf("%d", &manha[i]); 
        total_manha += manha[i]; 
    }

    printf("Digite a producao diaria (7 dias) do turno TARDE:\n");
    for(i=0; i<7; i++) { 
        printf("%s: ", dias[i]); 
        scanf("%d", &tarde[i]); 
        total_tarde += tarde[i]; 
    }

    printf("Digite a producao diaria (7 dias) do turno NOITE:\n");
    for(i=0; i<7; i++) { 
        printf("%s: ", dias[i]); 
        scanf("%d", &noite[i]); 
        total_noite += noite[i]; 
    }

    total_geral = total_manha + total_tarde + total_noite;

    // Inicializar com o primeiro dia
    maior_dia_prod = manha[0] + tarde[0] + noite[0];

    for(i=0; i<7; i++) {
        int total_dia = manha[i] + tarde[i] + noite[i];
        
        if(total_dia > maior_dia_prod) {
            maior_dia_prod = total_dia;
            idx_maior_dia = i;
        }

        if(total_dia < 500) {
            dias_baixa_prod++;
        }
    }

    printf("\n=== RELATORIO SEMANAL ===\n");
    printf("Producao Total: %d pecas\n", total_geral);
    
    if(total_manha >= total_tarde && total_manha >= total_noite)
        printf("Turno Campeao: Manha\n");
    else if(total_tarde >= total_noite)
        printf("Turno Campeao: Tarde\n");
    else
        printf("Turno Campeao: Noite\n");

    printf("Dia mais produtivo: %s (%d pecas)\n", dias[idx_maior_dia], maior_dia_prod);
    printf("Dias abaixo de 500 pecas: %d dias\n", dias_baixa_prod);
    
    printf("\n--- Media e Percentual por Turno ---\n");
    printf("Manha: Media %.1f/dia -- Representa %.1f%% do total\n", total_manha/7.0, (total_manha/(float)total_geral)*100);
    printf("Tarde: Media %.1f/dia -- Representa %.1f%% do total\n", total_tarde/7.0, (total_tarde/(float)total_geral)*100);
    printf("Noite: Media %.1f/dia -- Representa %.1f%% do total\n", total_noite/7.0, (total_noite/(float)total_geral)*100);

    return 0;
}
