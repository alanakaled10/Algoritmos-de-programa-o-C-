#include <stdio.h>
int main(){
    
        printf("========== TABUADA ==========\n");

    for (int i = 0; i < 11; i++)
    {
        printf("-------- TABUADA DO %d --------\n", i);
        for (int num = 0; num <= 10; num++)
        {
            printf("%d X %d = %d\n", i,num, i*num);
        }

        printf("-------------------------------\n");
    }
    
    
    return 0;
} 