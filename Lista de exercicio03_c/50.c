/* Exercicio 50: Cifra de Cesar
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void processar_cifra(char texto[], int chave) {
    int i;
    char c, base;

    for (i = 0; texto[i] != '\0'; i++) {
        c = texto[i];

       
        if (isalpha(c)) {
          
            base = isupper(c) ? 'A' : 'a';

            int deslocamento = (c - base + chave) % 26;
            
            if (deslocamento < 0) {
                deslocamento += 26;
            }
            
            texto[i] = base + deslocamento;
        }

    }
}

int main() {
    char texto[200];
    int chave, opcao;

    printf("--- CRIPTOGRAFIA DE CESAR ---\n");
    printf("Digite a mensagem: ");
    fgets(texto, sizeof(texto), stdin);


    texto[strcspn(texto, "\n")] = 0;

    printf("Digite a chave de deslocamento (ex: 3): ");
    scanf("%d", &chave);

    printf("\n1. Criptografar\n2. Descriptografar\nEscolha: ");
    scanf("%d", &opcao);

    if (opcao == 2) {
        chave = -chave; 
    }

    processar_cifra(texto, chave);

    printf("\nResultado Final:\n%s\n", texto);

    return 0;
}