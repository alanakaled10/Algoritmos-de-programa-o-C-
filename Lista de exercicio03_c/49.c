/* Exercicio 49: Analise de Texto
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para isalpha, tolower, etc.

int main() {
    char texto[1000];
    int i, vogais = 0, consoantes = 0, palavras = 0, linhas = 0;
    int dentro_palavra = 0; 

    printf("--- ANALISADOR DE TEXTO ---\n");
    printf("Digite o texto (pressione Enter e depois Ctrl+D (Linux) ou Ctrl+Z (Win) para encerrar se for entrada multipla):\n");
    printf("Ou apenas digite uma frase longa abaixo:\n");

    fgets(texto, sizeof(texto), stdin);


    if (strlen(texto) > 0) linhas = 1;

    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }

        if (texto[i] == '\n') {
            linhas++;
        }

        if (isspace(texto[i]) || texto[i] == '\0') {
            dentro_palavra = 0;
        } else if (dentro_palavra == 0) {
            dentro_palavra = 1;
            palavras++; 
        }
    }
    
    if (texto[strlen(texto)-1] == '\n') linhas--; 
    if (linhas == 0 && strlen(texto) > 0) linhas = 1;

    printf("\n--- RELATORIO ---\n");
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Palavras: %d\n", palavras);
    printf("Linhas: %d\n", linhas);

    return 0;
}