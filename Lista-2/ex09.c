#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("\nDigite tres valores para verificar se eles podem ser os comprimentos dos lados de um triângulo\n");
    scanf("%d %d %d", &X, &Y, &Z);

    if (X < Y + Z && Y < X + Z && Z < X + Y) {

        if (X == Y && Y == Z) {
            printf("Esses tres valores formam um triangulo equilatero");
        } else if (X != Y && X != Z && Y != Z) {
            printf("\nEsses tres valores formam um triangulo escaleno");
        } else {
            printf("\nEsses tres valores formam um triangulo isosceles");
        }
    } else {
        printf("\nEsses tres valores nao formam um triangulo");
    }

    return 0;
}