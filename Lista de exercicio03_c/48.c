/* Exercicio 48: Gerador de Calendario
*/

#include <stdio.h>

int eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int calcular_dia_semana(int dia, int mes, int ano) {
    
    if (mes < 3) {
        mes += 12;
        ano -= 1;
    }
    int k = ano % 100;
    int j = ano / 100;
    int dia_semana = (dia + 13*(mes+1)/5 + k + k/4 + j/4 + 5*j) % 7;
   
    return (dia_semana + 5) % 7; 
}

int main() {
    int mes, ano, dia_semana, dias_no_mes, i;
    char *nomes_meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", 
                           "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    int dias_meses[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("--- CALENDARIO ---\n");
    printf("Digite o Mes (1-12): "); scanf("%d", &mes);
    printf("Digite o Ano: "); scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido.\n");
        return 1;
    }


    if (mes == 2 && eh_bissexto(ano)) {
        dias_no_mes = 29;
    } else {
        dias_no_mes = dias_meses[mes];
    }


    dia_semana = calcular_dia_semana(1, mes, ano);

    printf("\n     %s %d\n", nomes_meses[mes], ano);
    printf("Dom Seg Ter Qua Qui Sex Sab\n");

    
    for (i = 0; i < dia_semana; i++) {
        printf("    "); 
    }


    for (i = 1; i <= dias_no_mes; i++) {
        printf("%3d ", i);

        if ((i + dia_semana) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}