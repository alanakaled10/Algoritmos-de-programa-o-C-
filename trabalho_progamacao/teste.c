#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    char string2[20];
    int comp;
    
    printf("digite uma palavra: ");
    scanf("%[^\n]s", string1);
    printf("digite uma palavra: ");
    scanf("%[^\n]s", string2);

    comp = stricmp(string1,string2);

    if (comp == 0)
    {
        printf("true");
    }

    else
    {
        printf("false");
    }
    
    
    
    

    return 0;
}