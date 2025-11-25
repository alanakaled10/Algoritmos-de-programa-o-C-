/*Tabuada*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero para exibir sua tabuada (1 a 10): ");
    scanf("%d", &num); 

    printf("\n============ TABUADA DO %d ============\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    

    return 0;
}