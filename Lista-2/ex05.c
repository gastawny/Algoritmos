#include <stdio.h>

int main() {
    const salariomin = 1212;
    int CPF, dependentes, renda;
    float aliquota, rendaliquida;
    printf("\nDigite o numero do seu CPF, numero de dependentes e renda mensal\n");
    scanf("%d %d %d", &CPF, &dependentes, &renda);
    rendaliquida = (float) renda / dependentes;

    if (rendaliquida < 2*salariomin) {
        printf("\nIsento de aliquota");
    } else if (rendaliquida >= 2*salariomin && rendaliquida < 3*salariomin) {
        aliquota = renda * 0.05;
        printf("\nValor da aliquota: R$ %.2f", aliquota);
    } else if (rendaliquida >= 3*salariomin && rendaliquida <=5*salariomin) {
        aliquota = renda * 0.1;
        printf("\nValor da aliquota: R$ %.2f", aliquota);
    } else if (rendaliquida >= 5*salariomin && rendaliquida <7*salariomin) {
        aliquota = renda * 0.15;
        printf("\nValor da aliquota: R$ %.2f", aliquota);
    } else {
        aliquota = renda * 0.2;
        printf("\nValor da aliquota: R$ %.2f", aliquota);
    }

    return 0;
}