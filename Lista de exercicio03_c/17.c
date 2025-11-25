/*Nota Válida*/

#include <stdio.h>

int main(){

    float nota;
    
    do
    {
        printf("\nDiite a nota (0-10): ");
        scanf("%f", &nota);
    } while (nota<0 || nota>10);
    
    printf("\nNota: %.2f", nota);

    return 0;
}