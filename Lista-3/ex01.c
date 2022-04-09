#include <stdio.h>

int main() {
    char op;
    printf("Digite seu estado civil:\nS-Solteiro\nC-Casado\nV-Viuvo\nD-Divorciado\nU-Uniaoestavel\n");
    scanf("%c", &op);
    switch (op) {
        case 's':
        case 'S': printf("Solteiro\n"); break;
        case 'c':
        case 'C': printf("Casado\n"); break;
        case 'v':
        case 'V': printf("Viuvo\n"); break;
        case 'd':
        case 'D': printf("Divorciado\n"); break;
        case 'u':
        case 'U': printf("Uniaoestavel\n"); break;
        default: printf("Dados invalidos\n");
    }

    return 0;
}