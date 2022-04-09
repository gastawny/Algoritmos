#include <stdio.h>

int main() {
    int codigo, quant;
    float valor;
    printf("Digite o codigo:\n");
    scanf("%d", &codigo);
    
    switch (codigo) {
        case 1001: {
            printf("Digite a quantidade\n");
            scanf("%d",&quant);
            valor = quant * 5.32;
        } break;
        case 1324: {
            printf("Digite a quantidade\n");
            scanf("%d",&quant);
            valor = quant * 6.45;
        } break;
        case 6548: {
            printf("Digite a quantidade\n");
            scanf("%d",&quant);
            valor = quant * 2.37;
        } break;
        case 987: {
            printf("Digite a quantidade\n");
            scanf("%d",&quant);
            valor = quant * 5.32;
        } break;
        case 7623: {
            printf("Digite a quantidade\n");
            scanf("%d",&quant);
            valor = quant * 6.45;
        } break;
        default: printf("Codigo invalido\n");
    }
    printf("Valor a pagar: R$ %.2f", valor);

    return 0;
}