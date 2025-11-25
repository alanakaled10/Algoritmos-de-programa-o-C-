/*Calculadora de Azulejos*/

#include <stdio.h>
int main(){
    
    float altura, largura, larguraAzulejo, alturaAzulejo, areaParede, areaAzulejo, qntdAzulejo;
    printf("Digite a altura da parede: "); 
    scanf("%f", &altura);
    printf("Digite a largura da parede: "); 
    scanf("%f", &largura);
    printf("Digite a altura do azulejo: "); 
    scanf("%f", &alturaAzulejo);
    printf("Digite a largura do azulejo: "); 
    scanf("%f", &larguraAzulejo);

    areaParede = altura*largura;

    areaAzulejo= alturaAzulejo*larguraAzulejo;

    qntdAzulejo = areaParede/areaAzulejo;

    printf("\nA quantidade de azulejos para a parede e: %.2f", qntdAzulejo);

    return 0;
}