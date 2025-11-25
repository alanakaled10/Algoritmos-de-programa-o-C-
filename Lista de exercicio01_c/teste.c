#include <stdio.h>
#include <time.h>

int main() {
  time_t rawtime;
  struct tm * timeinfo;

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  printf ("Ano atual: %d\n", timeinfo->tm_year + 1900);

  return 0;
}

//Explicação:
//#include <time.h>: Inclui o cabeçalho necessário para trabalhar com funções de tempo em C.
//#include <stdio.h>: Inclui o cabeçalho para operações de entrada e saída, como printf.
//time_t rawtime;: Declara uma variável do tipo time_t para armazenar o tempo em segundos.
//struct tm * timeinfo;: Declara um ponteiro para uma estrutura tm, que conterá as informações de data e hora.
//time(&rawtime);: Chama a função time para obter o tempo atual em segundos e armazená-lo em rawtime.
//timeinfo = localtime(&rawtime);: Chama a função localtime para converter o tempo em segundos em uma estrutura tm e armazena o endereço dessa estrutura em timeinfo.
//printf("Ano atual: %d\n", timeinfo->tm_year + 1900);: Acessa o campo tm_year da estrutura tm (que armazena o número de anos desde 1900) e adiciona 1900 para 