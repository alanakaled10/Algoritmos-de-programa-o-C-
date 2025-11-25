/* Conversao de Coordenadas Cartesianas para Polares */

#include <stdio.h>
#include <math.h> 

int main() {
    double x, y;     
    double r, teta;  
    double teta_graus; 

    printf("Digite a coordenada X: ");
    scanf("%lf", &x); 
    printf("Digite a coordenada Y: ");
    scanf("%lf", &y);

    r = sqrt(pow(x, 2) + pow(y, 2));

    teta = atan2(y, x);

    teta_graus = teta * (180.0 / 3.14159265);

    printf("\n--- RESULTADO ---\n");
    printf("Coordenadas Polares:\n");
    printf("Raio (r): %.2lf\n", r);
    printf("Angulo (teta): %.2lf radianos (%.2lf graus)\n", teta, teta_graus);


    printf("Localizacao: ");
    
    if (x > 0 && y > 0) {
        printf("1o Quadrante\n");
    } 
    else if (x < 0 && y > 0) {
        printf("2o Quadrante\n");
    } 
    else if (x < 0 && y < 0) {
        printf("3o Quadrante\n");
    } 
    else if (x > 0 && y < 0) {
        printf("4o Quadrante\n");
    } 
    else if (x == 0 && y == 0) {
        printf("Origem\n");
    } 
    else {
        printf("Sobre um dos eixos\n");
    }

    return 0;
}