#include <stdio.h>
int main(){
    
    float altura, resultado;
    char sexo;

    printf("Digite a aultura em Metros");
    scanf("%f", &altura);
    printf("Digite seu sexo (M para masculino e F para feminino)");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M')
    {
        resultado= (72.7*altura)-58;
        printf("Resultado do seu peso ideal: %.2f", resultado);
    }else
    {
        resultado= (61.1*altura)-44.7;
        printf("Resultado do seu peso ideal: %.2f", resultado);
    }
    
    
    
    return 0;
}