/*Analise Numerica Complexa*/

#include <stdio.h>
#include <math.h> 

int main() {
    float n1, n2, n3;
    float a, b, c; 
    float media_geo;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 > n2) { float temp = n1; n1 = n2; n2 = temp; }
    if (n1 > n3) { float temp = n1; n1 = n3; n3 = temp; }
    if (n2 > n3) { float temp = n2; n2 = n3; n3 = temp; }

    a = n1; 
    b = n2; 
    c = n3; 

    printf("\n--- ANALISE DOS NUMEROS (Ordenados: %.1f, %.1f, %.1f) ---\n", a, b, c);
    printf("Menor: %.2f\n", a);
    printf("Maior: %.2f\n", c);

  
    if ((b - a) == (c - b)) {
        printf("Formam uma PA de razao %.2f\n", b - a);
    } else {
        printf("Nao formam uma PA.\n");
    }

    if (a != 0 && b != 0) {
      
        if (fabs((b/a) - (c/b)) < 0.001) { 
             printf("Formam uma PG de razao %.2f\n", b/a);
        } else {
             printf("Nao formam uma PG.\n");
        }
    } else {
        printf("Nao formam PG (contem zeros).\n");
    }

    media_geo = pow(a * b * c, 1.0/3.0);
    
    printf("Media Geometrica: %.2f\n", media_geo);

    return 0;
}