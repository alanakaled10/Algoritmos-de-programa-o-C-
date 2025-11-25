/*Sequência de Fibonacci*/

#include <stdio.h>

int main()
{

    int numTermos, numAnterior=0, numPosterior=1, proximo;

    printf("A sequencia de Fibonacci e uma serie de numeros onde cada termo\n");
    printf("e a soma dos dois anteriores. Ela comeca assim:\n");
    printf("0, 1, 1, 2, 3, 5, 8, 13...\n\n");
    printf("Quantos termos da sequencia de Fibonacci você deseja gerar? ");
    scanf("%d", &numTermos);

    for (int i = 0; i < numTermos; i++)
    {
        printf("%d, ", numAnterior);
        proximo = numAnterior+numPosterior;
        numAnterior = numPosterior;
        numPosterior=proximo;
    }
    

    return 0;
}