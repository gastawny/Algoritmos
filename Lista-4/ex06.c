#include <stdio.h>
#include <math.h>

int main() {
    float x, i = 1, j = 2, soma = 1;
    printf("Digite um X, para calcular os 20 primeiros termos da serie:\n1 + 1/^2 + 1/^3 + 1/^4 + ...");
    scanf("%f", &x);
    for (i == 1 ; i < 20 ; i++, j++)
    soma = soma + (1 / pow(x, j));
    printf("O resultado e: %f", soma);

    return 0;
}