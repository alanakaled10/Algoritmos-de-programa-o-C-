/*Conversão de Segundos*/

#include <stdio.h>
int main(){
    
    int tempo, horas, min, segundos;
    printf("Digite o tempo em SEGUNDOS: ");
    scanf("%d", &tempo);

    horas = tempo/3600;
    min = (tempo%3600)/60;
    segundos = tempo%60;

    printf("\n%d segundos = \n%d h %d min e %d segundo(s)\n",tempo, horas, min, segundos);
    
    return 0;
}