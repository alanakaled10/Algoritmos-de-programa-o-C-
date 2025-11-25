#include <stdio.h>
#include <math.h>
int main(){
    
    int num;
    printf("Digite um numero INTEIRO e POSITIVO: ");
    scanf("%d", &num);

    while (num<0)
    {
        printf("Nuero invalido!\nDigite um numero POSITIVO: ");
        scanf("%d", &num);
    }
    

    while (num%2==0)
    {
        printf("%d\n", 2);
        num/=2;
    }

    for (int i = 3; i <= sqrt(num); i=i+2)
    {
        while (num%i==0)
        {
            printf("%d\n",i);
            num/=i;
        }
        
    }

    if (num>2)
    {
        printf("%d\n", num);
    }
    
    
    
    
    return 0;
}