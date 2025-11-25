/*Potência Condicional*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float base, expoente, calculo;
    printf("Digite a base da operacao: ");
    scanf("%f", &base);
    printf("Digite o expoente da operacao: ");
    scanf("%f", &expoente);

    if (base ==0 || expoente<=0)
    {
        printf("Erro!");
    }
    else
    {
        calculo = pow(base,expoente);
        printf("\n===== RESULTADO ===== \n%.2f", calculo);
    }
    
    
    return 0;
}