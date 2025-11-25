/*Sistema de Notas Ponderadas*/

#include <stdio.h>
int main(){

    float nota1, nota2, nota3, media, peso1, peso2, peso3;

    printf("Digite a nota 1, 2 e 3 ->\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Digite o peso da nota 1, da nota 2 e da nota 3 ->\n");
    scanf("%f %f %f", &peso1, &peso2, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    if (media >= 7)
    {
        printf("Aprovado! \nMedia: %.2f", media);
    }
    else if (media > 5)
    {
        printf("Recuperacao! \nMedia: %.2f", media);
    }
    else
    {
        printf("Reprovado!\nMedia: %.2f", media);
    }
    
    
    

    return 0;
}