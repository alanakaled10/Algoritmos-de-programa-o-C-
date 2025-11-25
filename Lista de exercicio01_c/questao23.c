/*Área do Triângulo*/

#include <stdio.h>
int main(){
    
    float base, altura, area, area1;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2.0;
    area1 = area;
    area1++;

    printf("===Area do triangulo===\n %.2fm2 \n\n===Area do triangulo aumentada em 1=== \n%.2fm2", area, area1);
    
    return 0;
}