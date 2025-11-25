//Área do Retângulo
#include <stdio.h>
int main(){
    
   float largura, altura, area;
   printf("Digite a largura do retangulo: ");
   scanf("%f", &largura);

   printf("Digite a altura do retangulo: ");
   scanf("%f", &altura);

   area = largura*altura;

   printf("-------------------------------\nA area do retangulo e: %.2f m²\n-------------------------------", area);

    return 0;
}