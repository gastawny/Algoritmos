#include <stdio.h>

void main() {
    int A, B, RES;
    printf("\n\t Calculadora de soma \n Para somar digite o primeiro numero: \n");
    scanf("%d", &A);
    printf("Digite o segundo numero: \n");
    scanf("%d", &B);
    RES = A + B;
    printf("\n %d + %d = %d \n\n", A, B, RES);
}