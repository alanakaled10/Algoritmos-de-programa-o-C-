/*PROJETO FINAL - Calculadora de Engenharia*/

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    int opcao_principal, sub_opcao;

    float r, h, b, B, area, vol; 
    float x, y, teta;
    float a, b_eq, c, delta, x1, x2;
    
    do {

        printf("\n======================================\n");
        printf("   CALCULADORA DE ENGENHARIA v1.0     \n");
        printf("======================================\n");
        printf("1. Areas (Geometria Plana)\n");
        printf("2. Volumes (Geometria Espacial)\n");
        printf("3. Conversoes (Polar/Cartesiano)\n");
        printf("4. Solucionador de Equacoes (2o Grau)\n");
        printf("0. SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_principal);
        
        switch(opcao_principal) {
            case 1: 
                printf("\n--- AREAS ---\n");
                printf("1. Circulo\n2. Triangulo\n3. Trapezio\nOpcao: ");
                scanf("%d", &sub_opcao);
                
                if (sub_opcao == 1) {
                    printf("Raio: "); scanf("%f", &r);
                    area = M_PI * pow(r, 2);
                    printf("Area do Circulo: %.2f\n", area);
                } else if (sub_opcao == 2) {
                    printf("Base: "); scanf("%f", &b);
                    printf("Altura: "); scanf("%f", &h);
                    area = (b * h) / 2;
                    printf("Area do Triangulo: %.2f\n", area);
                } else if (sub_opcao == 3) {
                    printf("Base Maior: "); scanf("%f", &B);
                    printf("Base Menor: "); scanf("%f", &b);
                    printf("Altura: "); scanf("%f", &h);
                    area = ((B + b) * h) / 2;
                    printf("Area do Trapezio: %.2f\n", area);
                } else {
                    printf("Opcao invalida!\n");
                }
                break;
                
            case 2:
                printf("\n--- VOLUMES ---\n");
                printf("1. Esfera\n2. Cilindro\n3. Cone\nOpcao: ");
                scanf("%d", &sub_opcao);
                
                if (sub_opcao == 1) {
                    printf("Raio: "); scanf("%f", &r);
                    vol = (4.0/3.0) * M_PI * pow(r, 3);
                    printf("Volume da Esfera: %.2f\n", vol);
                } else if (sub_opcao == 2) {
                    printf("Raio: "); scanf("%f", &r);
                    printf("Altura: "); scanf("%f", &h);
                    vol = M_PI * pow(r, 2) * h;
                    printf("Volume do Cilindro: %.2f\n", vol);
                } else if (sub_opcao == 3) {
                    printf("Raio: "); scanf("%f", &r);
                    printf("Altura: "); scanf("%f", &h);
                    vol = (1.0/3.0) * M_PI * pow(r, 2) * h;
                    printf("Volume do Cone: %.2f\n", vol);
                }
                break;

            case 3: 
                printf("\n--- CONVERSOES ---\n");
                printf("1. Cartesiano (x,y) -> Polar (r,teta)\n");
                printf("2. Polar (r,teta) -> Cartesiano (x,y)\nOpcao: ");
                scanf("%d", &sub_opcao);
                
                if (sub_opcao == 1) {
                    printf("X: "); scanf("%f", &x);
                    printf("Y: "); scanf("%f", &y);
                    r = sqrt(pow(x, 2) + pow(y, 2));
                    teta = atan2(y, x) * (180.0 / M_PI); 
                    printf("Polar: r=%.2f, teta=%.2f graus\n", r, teta);
                } else if (sub_opcao == 2) {
                    printf("Raio (r): "); scanf("%f", &r);
                    printf("Angulo (graus): "); scanf("%f", &teta);
                    float rad = teta * (M_PI / 180.0);
                    x = r * cos(rad);
                    y = r * sin(rad);
                    printf("Cartesiano: x=%.2f, y=%.2f\n", x, y);
                }
                break;

            case 4: 
                printf("\n--- EQUACAO 2o GRAU ---\n");
                printf("Formato ax^2 + bx + c = 0\n");
                printf("a: "); scanf("%f", &a);
                printf("b: "); scanf("%f", &b_eq);
                printf("c: "); scanf("%f", &c);
                
                if (a == 0) {
                    printf("Nao e equacao de 2o grau!\n");
                } else {
                    delta = (b_eq*b_eq) - (4*a*c);
                    if (delta < 0) {
                        printf("Nao possui raizes reais.\n");
                    } else {
                        x1 = (-b_eq + sqrt(delta)) / (2*a);
                        x2 = (-b_eq - sqrt(delta)) / (2*a);
                        printf("Raizes: x1=%.2f, x2=%.2f\n", x1, x2);
                    }
                }
                break;

            case 0:
                printf("Encerrando sistema...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        
        if (opcao_principal != 0) {
            printf("\nPressione Enter para continuar...");
            getchar(); getchar(); 
        }

    } while (opcao_principal != 0);

    return 0;
}