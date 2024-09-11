/ Fazer um programa que lê um valor, um operador (+,-,*,/) e 
//outro valor e imprime o resultado da expressão: <valor 1><operando><valor2>

#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &num1);

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo valor: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0.0) {
                resultado = num1 / num2;
            } else {
                printf("Erro! Divisao por zero.");
                return -1;
            }
            break;
        default:
            printf("Erro! Operador invalido.");
            return -1;
    }

    printf("Resultado: %.2lf", resultado);

    return 0;
}
