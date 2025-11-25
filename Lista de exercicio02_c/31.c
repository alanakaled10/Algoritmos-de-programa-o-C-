/*Classificação de Peso*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float peso, altura, mpi;
    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    mpi = peso/pow(altura,2);
    printf("%.2f", mpi);

    if (mpi<18.5)
    {
        printf("MPI -> %.2f \nAbaixo do peso", mpi);
    }
    else if (mpi<=14.9)
    {
        printf("MPI -> %.2f \nPeso normal", mpi);
    }
    else if (mpi<=29.9)
    {
        printf("MPI -> %.2f \nSobrepeso", mpi);
    }
    else if (mpi<=34.9)
    {
        printf("MPI -> %.2f \nObesidade grau I", mpi);
    }
    else if (mpi<=39.9)
    {
        printf("MPI -> %.2f \nSobrepeso", mpi);
    }
    
    
    
    
    return 0;
}