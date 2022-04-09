#include <stdio.h>

int main() {
    int porcentagem;
    float preco, reajuste;
    char categoria;
    printf("Digite o preco do produto:\nR$: ");
    scanf("%f", &preco);
    printf("Digite a categoria:\n");
    setbuf(stdin, NULL);
    scanf("%c", &categoria);

    switch (categoria) {
        case 'a':
        case 'A': {
            reajuste = preco * 0.5;
            porcentagem = 50;
        } break;
        case 'b':
        case 'B': {
            reajuste = preco * 0.25;
            porcentagem = 25;
        } break;
        case 'c':
        case 'C': {
            reajuste = preco * 0.15;
            porcentagem = 15;
        } break;
        default: {
            reajuste = preco * 0.05;
            porcentagem = 5;
        }
    }
    printf("Valor antigo: R$ %.2f\nPercentual de reajuste: %d%%\nValor reajustado: R$ %.2f\n", preco, porcentagem, reajuste);

    return 0;
}