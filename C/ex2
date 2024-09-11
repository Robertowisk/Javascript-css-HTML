//Fazer um programa que solicita um número decimal e imprime o correspondente em binário.

#include <stdio.h>
#define MAX 1000

int stack[MAX];
int top = -1;

void push(int num) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = num;
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    int num;

    printf("Digite um numero decimal: ");
    scanf("%d", &num);

    while (num > 0) {
        push(num % 2);
        num = num / 2;
    }

    printf("Numero em binario: ");
    while (top >= 0) {
        printf("%d", pop());
    }

    return 0;
}
