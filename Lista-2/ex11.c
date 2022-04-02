#include <stdio.h>

int main() {
    int x, y;
    printf("\nDigite as coordenadas de um ponto (x,y)\n");
    scanf("%d %d", &x, &y);

    if (x == 0 || y == 0) {
        if (x != 0 && y == 0) {
            printf("\nO ponto (%d,%d) esta sobre o eixo das abscissas\n", x, y);
        } else if (x == 0 && y != 0) {
            printf("\nO ponto (%d,%d) esta sobre o eixo das ordenadas\n", x, y);
        } else {
             printf("\nO ponto (%d,%d) esta sobre a origem\n", x, y);
        }
    } else {
        if (x > 0 && y > 0) {
            printf("\nO ponto (%d,%d) esta no 1o quadrante\n", x, y);
        } else if (x < 0 && y > 0) {
            printf("\nO ponto (%d,%d) esta no 2o quadrante\n", x, y);
        } else if (x < 0 && y < 0) {
            printf("\nO ponto (%d,%d) esta no 3o quadrante\n", x, y);
        } else {
            printf("\nO ponto (%d,%d) esta no 4o quadrante\n", x, y);
        }
    }

    return 0;
}