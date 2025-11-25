/*Empréstimo Bancário*/

#include <stdio.h>
int main(){

    float salario, emprestimo;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo desejado: ");
    scanf("%f", &emprestimo);

    if (salario >= 1000 && emprestimo <= salario*10)
    {
        printf("Emprestimo Aprovado!");
    }
    else
    {
        printf("Emprestimo negado!");
    }
    
    

    return 0;
}