/*Salário com Aumento*/

#include <stdio.h>
int main(){
    
    float salario;
    printf("Digite seu salario atual: ");
    scanf("%f", &salario);

    if (salario<=1000)
    {
        printf("\nSalario Atual: %.2f \nSaralio com acrescimo de 20%%: %.2f", salario, salario*1.2);
    }
    else if (salario<=2000)
    {
        printf("\nSalario Atual: %.2f \nSaralio com acrescimo de 15%%: %.2f", salario, salario*1.15);
    }
    else
    {
        printf("\nSalario Atual: %.2f \nSaralio com acrescimo de 10%%: %.2f", salario, salario*1.1);
    }
    
    
    
    return 0;
}