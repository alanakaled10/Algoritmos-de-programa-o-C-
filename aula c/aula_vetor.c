#include <stdio.h>

int main(){
    int par = 2;
    int vetor[10];

   
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = par;
        par+=2;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%d ", vetor[j]);
    }
    
    
}