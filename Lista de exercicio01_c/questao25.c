/*Densidade*/

#include <stdio.h>
int main(){
    
    float massa, volume, densidade;
    printf("Digite a massa e logo em seguida o volume: ");
    scanf("%f %f", &massa, &volume);

    densidade = massa/volume;

    printf("Densidade :  %.2f", densidade);
    
    return 0;
}