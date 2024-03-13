#include <stdio.h>

void decToBinary(int num) {
    int binary[32];
    int i = 0;

  // conta correspondente ao binario
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("O número binário correspondente é: ");
    for (int j = i - 1; j >= 0; j--) {
    printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Insira um número decimal: ");
    scanf("%d", &decimal);
    decToBinary(decimal);

    return 0;
}
