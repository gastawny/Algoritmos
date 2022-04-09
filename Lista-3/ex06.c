#include <stdio.h>

int main() {
    int op;
    float a, b, area;
    printf("Deseja calcular:\n1-A area de um triangulo\n2-A area de um circulo\n3-A area de um cubo\n4-A area de um cilindro\n");
    scanf("%d", &op);

    switch (op) {
        case 1: {
            printf("Digite a medida da base:\n");
            scanf("%f", &a);
            printf("Digite a medida da altura:\n");
            scanf("%f", &b);
            area = (a * b) / 2;
        } break;
        case 2: {
            printf("Digite a medida do raio:");
            scanf("%f", &a);
            area = a * a * 3.1415;
        } break;
        case 3: {
            printf("Digite a medida da base:");
            scanf("%f", &a);
            area = a * a * 6;
        } break;
        case 4: {
            printf("Digite a medida do raio:");
            scanf("%f", &a);
            printf("Digite a medida da altura:");
            scanf("%f", &b);
            area = (2 * 3.1415 * a * b) + (2 * a * a * 3.1415);
        } break;
        default: printf("Valor invalido");
    }
    printf("Resultado: %.2f", area);

    return 0;
}