/*Análise Geométrica Completa*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float a, b, c; 
    float s, area, perimetro;

    printf("--- ANALISE DE TRIANGULO (Geometria Analitica) ---\n");

    printf("Ponto A (x1 y1): "); scanf("%f %f", &x1, &y1);
    printf("Ponto B (x2 y2): "); scanf("%f %f", &x2, &y2);
    printf("Ponto C (x3 y3): "); scanf("%f %f", &x3, &y3);

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Lado AB
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)); // Lado BC
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); // Lado CA

    printf("\nLados calculados: \nAB = %.2f \nBC = %.2f \nCA = %.2f\n", a, b, c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("\nStatus: FORMA um triangulo valido.\n");

        perimetro = a + b + c;

        s = perimetro / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Perimetro: %.2f\n", perimetro);
        printf("Area (Heron): %.2f\n", area);

        printf("Classificacao quanto aos lados: ");
        if (a == b && b == c) {
            printf("EQUILATERO (Todos iguais)\n");
        } else if (a != b && b != c && a != c) {
            printf("ESCALENO (Todos diferentes)\n");
        } else {
            printf("ISOSCELES (Dois lados iguais)\n");
        }

    } else {
        printf("\nERRO: Os pontos informados NAO formam um triangulo (sao colineares ou distantes demais).\n");
    }

    return 0;
}