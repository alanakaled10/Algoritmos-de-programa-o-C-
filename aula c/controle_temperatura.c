/*Controle de Temperatura Semanal*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float temperaturas [7];
    float temp_media = 0;
    float mais_quente[2] = {0}, mais_frio[2]={0};
    int acima_30 =0;

    printf("Digite a temperatura referente aos dias da semana\n\n");
    printf("01_Domindo \n02_Segunda \n03_Terca \n04_quarta \n05_Quinta \n06_Sexta \n07_Sabado\n\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Dia 0%d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }

    system("cls");


    for (int i = 0; i < 7; i++)
    {
        temp_media+=temperaturas[i];
        if (temperaturas[i] > mais_quente[0])
        {
            mais_quente[0] = temperaturas[i];
            mais_quente[1] = i+1;
        }
        if (temperaturas[i] < mais_frio[0])
        {
            mais_frio[0] = temperaturas[i];
            mais_frio[1] = i+1;
        }
        if (temperaturas[i] > 30)
        {
            acima_30++;
        }
        
        
    }

    temp_media/= sizeof(temperaturas)/sizeof(temperaturas[0]);

    printf("Temperatura media: %.2f\n", temp_media);
    printf("Dias mais quente: Dia 0%.0f com %.2f graus\n", mais_quente[1], mais_quente[0]);
    printf("Dias mais Frio: Dia 0%.0f com %.2f graus\n", mais_frio[1], mais_frio[0]);
    printf("Dias acima de 30 graus: %d", acima_30);
}