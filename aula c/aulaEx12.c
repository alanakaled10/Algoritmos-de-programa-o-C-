#include <stdio.h>
int main(){
    
    int dia, mes, ano, diasMes;
    printf("Digite a data no formato ddmmaaaa\n");
    printf("Digite o dia DD: ");
    scanf("%d", &dia);
    printf("Digite o mes MM: ");
    scanf("%d", &mes);
    printf("Digite o ano AAAA: ");
    scanf("%d", &ano);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        diasMes = 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        diasMes = 30;
    }
    else
    {
        if ((ano % 400 == 0 )  || ((ano % 4 == 0) && (ano % 100 != 0)))
        {
            diasMes = 29;
        }
        else
        {
            diasMes = 28;
        }
        
    }
     if (mes <1 || diasMes<dia )
     {
        printf("Data invalida!\n");
     }
     else
     {
        printf("Data valida: %d/%d/%d", dia, mes, ano);
     }
     
    
    
    return 0;
}