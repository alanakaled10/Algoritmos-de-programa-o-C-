#include <stdio.h>
#include <math.h> //biblioteca chamada 'matemática', coloquei para usa o "fabs"
int main(){
    
    float salario1, salario2, diferenca;
    printf("Digite o valor do salario do primeiro jogador: ");
    scanf("%f", &salario1);
    printf("Digite o valor do salario do segundo jogador: ");
    scanf("%f", &salario2);
    diferenca = fabs(salario1-salario2); //traz o valor absoluto, sem + ou -
    printf("A diferenca entre os salarios e: %0.2f", diferenca);
 
    return 0;
}