/* Exercicio 44: Calculadora Cientifica Basica
   Implementacao direta com math.h
*/

#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double num1, num2, res;

    printf("--- CALCULADORA ---\n");
    printf("Operadores disponiveis: +, -, *, /, ^ (potencia), r (raiz)\n");
    printf("Digite a operacao (ex: 2 + 2): ");
    
    // Truque: Ler o primeiro numero, depois o operador
    scanf("%lf %c", &num1, &op);

    // Se nao for raiz, precisa do segundo numero
    if (op != 'r') {
        scanf("%lf", &num2);
    }

    switch(op) {
        case '+': res = num1 + num2; break;
        case '-': res = num1 - num2; break;
        case '*': res = num1 * num2; break;
        case '/': 
            if(num2 == 0) { printf("Erro: Divisao por zero\n"); return 1; }
            res = num1 / num2; 
            break;
        case '^': res = pow(num1, num2); break;
        case 'r': 
            if(num1 < 0) { printf("Erro: Raiz de negativo\n"); return 1; }
            res = sqrt(num1); 
            break;
        default:
            printf("Operador invalido.\n");
            return 1;
    }

    if (op == 'r')
        printf("Resultado: %.2lf\n", res);
    else
        printf("Resultado: %.2lf\n", res);

    return 0;
}