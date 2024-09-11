//Faca um programa em "C" que le dois números e utiliza uma função chamada "soma" e outra
//chamada "subtracao" para imprimir a soma e a diferenca entre os dois números.
//Ambas funções devem receber dois inteiros como parâmetro e retornar um inteiro como resultado.

#include <stdio.h>

int soma(int num1, int num2) {
    return num1 + num2;
}

int subtracao(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtracao: %d\n", subtracao(num1, num2));

    return 0;
}
