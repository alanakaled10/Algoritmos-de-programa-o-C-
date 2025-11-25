/*Análise de Desempenho de Atleta*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float tempo [12];
    int corridas = sizeof(tempo) / sizeof(tempo[0]);
    float tempoMedio = 0, melhorTempo, piorTempo, variacao, acimaMedia = 0;

    printf("==== TEMPO CORRIDAS ====\n\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Tempo %d: ", i+1);
        scanf("%f", &tempo[i]);
        
    }
    system("cls");
    


    melhorTempo = tempo[0];
    piorTempo = tempo[0];
    for (int i = 0; i < corridas; i++)
    {
        tempoMedio+=tempo[i];

        if (melhorTempo > tempo[i])
        {
            melhorTempo = tempo[i];
        }
        else if (piorTempo < tempo[i])
        {
            piorTempo = tempo[i];
        }

       
        
    }
    
    tempoMedio/=corridas;

      for (int i = 0; i < corridas; i++)
    {

        if (tempo[i] > tempoMedio)
        {
            acimaMedia++;
        }
        
    }
    

    variacao = piorTempo - melhorTempo;
    
    printf("=== ANALISE DE DESEMPENHO ===\n");
    printf("\nTempo medio: %.2f", tempoMedio);
    printf("\nMelhor tempo: %.2f", melhorTempo);
    printf("\nPior tempo: %.2f", piorTempo);
    printf("\nVariacao: %.2f", variacao);
    printf("\nCorridas acima da media: %.2f", acimaMedia);

    
    

}