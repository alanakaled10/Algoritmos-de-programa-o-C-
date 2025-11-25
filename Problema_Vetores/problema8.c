#include <stdio.h>

int main() {
    double gastos[5];
    char *categorias[] = {"Alimentacao", "Transporte", "Moradia", "Lazer", "Outros"};
    
    double total = 0;
    int i, idx_maior = 0, idx_menor = 0;

    printf("=== Problema 8: Analise de Gastos ===\n");
    
    for(i=0; i<5; i++) {
        printf("Gasto com %s: R$ ", categorias[i]);
        scanf("%lf", &gastos[i]);
        total += gastos[i];
    }

    if (total == 0) {
        printf("\nNenhum gasto registrado.\n");
        return 0;
    }

    for(i=0; i<5; i++) {
        if(gastos[i] > gastos[idx_maior]) idx_maior = i;
        if(gastos[i] < gastos[idx_menor]) idx_menor = i;
    }

    printf("\n=== ANALISE FINANCEIRA ===\n");
    printf("Gasto Total: R$ %.2lf\n", total);
    
    printf("\n--- Detalhamento ---\n");
    for(i=0; i<5; i++) {
        double pct = (gastos[i] / total) * 100.0;
        printf("%s: R$ %.2lf (%.1lf%%)", categorias[i], gastos[i], pct);
        
        if(pct > 30.0) {
            double limite = total * 0.30;
            printf(" [ALERTA: Acima de 30%%!]");
            printf("\n -> Sugestao: Reduzir para no maximo R$ %.2lf", limite);
        }
        printf("\n");
    }

    printf("\nMaior gargalo: %s\n", categorias[idx_maior]);
    printf("Menor custo: %s\n", categorias[idx_menor]);

    return 0;
}
