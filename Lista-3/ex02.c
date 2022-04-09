#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o seu codigo para descobrir o seu grupo\n");
    scanf("%d", &codigo);
    switch (codigo) {
        case 1: printf("Grupo com 50%% de promocao\n"); break;
        case 3:
        case 5: printf("Grupo sem desconto\n"); break;
        case 10 ... 20: printf("Grupo com 10%% de promocao\n"); break;
        default: printf("Codigo nao valido\n");
    }

    return 0;
}