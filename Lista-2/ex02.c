#include <stdio.h>

int main() {
    int  bruto, proventos;
    float liquido, desconto;
    printf("Digite o valor do seu salario bruto:\n");
    scanf("%d", &bruto);
    printf("Digite o valor dos proventos:\n");
    scanf("%d", &proventos);

    if (bruto <= 1212) { // salario minimo atual: R$ 1.212,00
        desconto = bruto * 0.05;
        liquido = bruto + proventos - desconto;
        printf("Seu salario liquido sera: R$ %.1f\n", liquido);
    } else {
        desconto = bruto * 0.1;
        liquido = bruto + proventos - desconto;
        printf("Seu salario liquido sera: R$ %.1f\n", liquido);
    }
    return 0;
}