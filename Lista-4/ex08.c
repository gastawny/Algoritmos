#include <stdio.h>
#include <math.h>

int main() {
    int n, soma = 1, i = 1, a = 1, b = 0, somatotal = 0;
    printf("\nDigite a quantidade de termos para calcular a soma de termos da serie de Fibonacci\n");
    scanf("%d", &n);
    printf("Serie de Fibonacci = \"");
        for (i == 1; i <= n-1; i++) {
            soma = a + b;
            a = b;
            b = soma;
            printf("%d, ", soma);
            somatotal = somatotal + soma;
        }
        for (i == 1; i <= n; i++) {
            soma = a + b;
            a = b;
            b = soma;
            somatotal = somatotal + soma;
            printf("%d\"\nSoma dos %do primeiros termos = %d", soma, n, somatotal);
        }

    return 0;
}