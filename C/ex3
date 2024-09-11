//Faça um programa em "C" que lê dois valores e imprime: - se o primeiro valor for menor que o segundo, 
//a lista de valores do primeiro até o segundo; - se o primeiro valor for menor que o segundo 
//a lista de valores do segundo até o primeiro em ordem decrescente;
//- se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        for (i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
    } else if (num1 > num2) {
        for (i = num1; i >= num2; i--) {
            printf("%d ", i);
        }
    } else {
        printf("Valores iguais");
    }

    return 0;
}
