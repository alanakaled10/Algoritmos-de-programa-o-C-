/*Logaritmo Natural*/

#include <stdio.h>
#include <math.h>
int main(){
    
    float num, numLog;
    printf("Digite um numero positivo: ");
    scanf("%f", &num);

    if (num<0)
    {
        printf("O numero nao e positivo, digite novamente: ");
        scanf("%f", &num);
    }
        
    numLog = log(num);
        
    
    printf("O logaritimo natural do numero digitado e: %.2f", numLog);
    
    return 0;
}