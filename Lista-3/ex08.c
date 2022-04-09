#include <stdio.h>

int main() {
    int codigo;
    float preco;
    printf("Digite o preco do produto\n");
    scanf("%f", &preco);
    printf("Digite o codigo do produto\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1: printf("R$ %.2f - Sul\n", preco); break;
        case 2: printf("R$ %.2f - Norte\n", preco); break;
        case 3: printf("R$ %.2f - Leste\n", preco); break;
        case 4: printf("R$ %.2f - Oeste\n", preco); break;
        case 5:
        case 6: printf("R$ %.2f - Nordeste\n", preco); break;
        case 7 ... 9: printf("R$ %.2f - Sudeste\n", preco); break;
        case 10 ... 20: printf("R$ %.2f - Centro Oeste\n", preco); break;
        case 25 ... 50: printf("R$ %.2f - Nordeste\n", preco); break;
        default: printf("Codigo invalido\n");
    }

    return 0;
}