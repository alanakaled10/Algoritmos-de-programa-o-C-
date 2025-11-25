/*Hipotenusa do Triângulo Retângulo*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float catetoOp, catetoAd, hipotenusa;
    printf("Digite o cateto oposto (cm): ");
    scanf("%f", &catetoOp);
    printf("Digite o cateto adjacente (cm): ");
    scanf("%f", &catetoAd);

    hipotenusa = sqrt(pow(catetoAd,2) + pow(catetoOp,2));

    printf("\nHipotenusa: %.2f cm", hipotenusa);
    
    return 0;
}