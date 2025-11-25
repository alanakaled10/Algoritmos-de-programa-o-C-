/* Analise de Funcao Quadratica */

#include <stdio.h>
#include <math.h> // Necessario para sqrt (raiz quadrada)

int main(){

    float a, b, c;
    float delta, x1, x2, xv, yv;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de 0 para ser uma funcao quadratica.\n");
        return 1;
    }

    delta = (b * b) - (4 * a * c);
    xv = -b / (2 * a);
    yv = -delta / (4 * a);

    printf("\n--- RESULTADOS ---\n");

    if (a > 0) {
        printf("Concavidade: Para CIMA (U)\n");
        printf("Tipo de ponto: MINIMO\n");
    } else {
        printf("Concavidade: Para BAIXO\n");
        printf("Tipo de ponto: MAXIMO\n");
    }

    printf("Vertice (xv, yv): (%.2f, %.2f)\n", xv, yv);
    

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: Duas reais e distintas \nRaiz 1 -> %.2f \nRaiz 2 -> %.2f\n", x1, x2);
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raizes: Uma raiz real unica \nRaiz -> %.2f\n", x1);
    } 
    else {
        printf("Raizes: Nao possui raizes reais (Delta < 0)\n");
    }

    return 0;
}