/*Conceito por Nota*/

#include <stdio.h>
int main(){
    
    int nota;
    printf("Digite a nota (0-100): ");
    scanf("%d", &nota);

    if (nota>=90)
    {
        printf("Nota A (90-100)");
    }
    else if (nota>=80)
    {
        printf("Nota  B (80-89)");
    }
    else if (nota>=70)
    {
        printf("Nota C(70-79)");
    }
    else if (nota>=60)
    {
        printf("Nota D (60-69)");
    }
    else
    {
        printf("Nota F (<60)");
    }
    
    return 0;
}