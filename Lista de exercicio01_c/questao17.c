/*Volume da Caixa D'água*/

#include <stdio.h>
int main(){
    
    float comprimento, largura, altura, volume;
    printf("Digite o comprimento da caixa em metros: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa em metros: ");
    scanf("%f", &altura);

    volume = comprimento*largura*altura;

    printf("\nO volume da caixa e: %.2f m³", volume);

    return 0;
}