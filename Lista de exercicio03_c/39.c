/* Exercicio 39: Torre de Hanoi
*/

#include <stdio.h>
#include <math.h>

int main() {
    int discos;
    unsigned long long movimentos; 
    // unsigned long long permite calcular ate 64 discos (teoricamente)

    printf("--- TORRE DE HANOI (CALCULADORA) ---\n");
    printf("Digite o numero de discos: ");
    scanf("%d", &discos);

    
    if (discos < 64) {
        movimentos = (1ULL << discos) - 1;
        
        printf("\nPara resolver a Torre de Hanoi com %d discos,\n", discos);
        printf("o numero minimo de movimentos e: %llu\n", movimentos);
        

        if (discos > 30) {
            printf("\nAVISO: Se voce movesse 1 disco por segundo, levaria\n");
            printf("mais de %.0f anos para terminar!\n", movimentos / 31536000.0);
        }
    } else {
        printf("Numero muito grande para calculo padrao!\n");
    }

    return 0;
}