/*Média Ponderada*/

#include <stdio.h>
int main(){
    
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Didite a nota um: ");
    scanf("%f", &nota1);
    printf("Digite o peso da nota: ");
    scanf("%f", &peso1);
    printf("Didite a nota dois: ");
    scanf("%f", &nota2);
    printf("Digite o peso da nota: ");
    scanf("%f", &peso2);
    printf("Didite a nota tres: ");
    scanf("%f", &nota3);
    printf("Digite o peso da nota: ");
    scanf("%f", &peso3);

    media = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1 + peso2 + peso3);

    printf("\n=====Notas e seus respectivos pesos=====\n");
    printf("Nota 1: %.2f Peso -> %.2f \nNota 2: %.2f Peso -> %.2f \nNota 3: %.2f Peso -> %.2f \n", nota1, peso1, nota2, peso2, nota3, peso3);
    printf("--------Media Ponderada--------\n %.2f", media);
    
    
    return 0;
}