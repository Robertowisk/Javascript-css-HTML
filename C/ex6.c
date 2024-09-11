//Fazer uma função que cacula a enésima potência de uma variável real x: f(x, n) = xn

#include <stdio.h>
#include <math.h>

double potencia(double x, int n) {
    return pow(x, n);
}

int main() {
    double x;
    int n;

    printf("Digite a base: ");
    scanf("%lf", &x);

    printf("Digite o expoente: ");
    scanf("%d", &n);

    printf("Resultado: %.2lf\n", potencia(x, n));

    return 0;
}
