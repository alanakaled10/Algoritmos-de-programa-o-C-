/*IMC com Classificação*/

#include <stdio.h>
int main(){
    
    float peso, altura, imc;
    printf("Digite o seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if (imc<18.5)
    {
        printf("Abaixo do peso!");
    }
    else if (imc>18.4 && imc<=25)
    {
        printf("Normal");
    }
    else if (imc>24.9 && imc<30)
    {
        printf("Sobrepeso");
    }
    else
    {
        printf("Obeso");
    }
    
    

    return 0;
}