/* Exercicio 41: Raiz Quadrada via Newton-Raphson
*/

#include <stdio.h>
#include <math.h> 

int main() {
    double n, estimativa, nova_estimativa, erro;
    double tolerancia = 0.000001;
    int iteracao = 0;

    printf("--- RAIZ QUADRADA (NEWTON-RAPHSON) ---\n");
    printf("Digite um numero para calcular a raiz: ");
    scanf("%lf", &n);

    if (n < 0) {
        printf("Nao existe raiz real de numero negativo.\n");
        return 1;
    }

    estimativa = n / 2.0;
    if (estimativa == 0) estimativa = 1.0; 

    printf("\nProcesso de convergencia:\n");


    do {

        nova_estimativa = 0.5 * (estimativa + (n / estimativa));
        

        erro = fabs(nova_estimativa - estimativa);
        
        estimativa = nova_estimativa;
        iteracao++;
        
        printf("Iteracao %d: %.10f\n", iteracao, estimativa);

    } while (erro > tolerancia);

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Raiz Calculada: %.10f\n", estimativa);
    printf("Funcao sqrt() do C: %.10f\n", sqrt(n));
    printf("Total de iteracoes: %d\n", iteracao);

    return 0;
}