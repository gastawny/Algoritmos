#include <stdio.h>

int main() {
    int i;
    float a, b, c;
    printf("\nDigite 1, 2 ou 3 para mostrar de modos diferentes os proximos tres numeros que voce digitar\n");
    scanf("%d %f %f %f", &i, &a, &b, &c);

    if (i == 1, 2, 3) {
        if (i == 1) {
            if (a <= b && a <= c) {
                if (b <= c) {
                    printf("\n%.1f  %.1f  %.1f", a, b, c);
                } else {
                    printf("\n%.1f  %.1f  %.1f", a, c, b);
                }
            } else if (b <= a && b <= c) {
                if (a <= c) {
                    printf("\n%.1f  %.1f  %.1f", b, a, c);
                } else {
                    printf("\n%.1f  %.1f  %.1f", b, c, a);
                }
            } else {
                if (a <= b) {
                    printf("\n%.1f  %.1f  %.1f", c, a, b);
                } else {
                    printf("\n%.1f  %.1f  %.1f", c, b, a);
                }
            }
        } else if ( i == 2) {
            if (a >= b && a >= c) {
                if (b >= c) {
                    printf("\n%.1f  %.1f  %.1f", a, b, c);
                } else {
                    printf("\n%.1f  %.1f  %.1f", a, c, b);
                }
            } else if (b >= a && b >= c) {
                if (a >= c) {
                    printf("\n%.1f  %.1f  %.1f", b, a, c);
                } else {
                    printf("\n%.1f  %.1f  %.1f", b, c, a);
                }
            }  else {
            if (a >= b) {
                    printf("\n%.1f  %.1f  %.1f", c, a, b);
                } else {
                    printf("\n%.1f  %.1f  %.1f", c, b, a);
                }
            }
        } else if ( i == 3) {
            if (a >= b && a >= c) {
                printf("\n%.1f  %.1f  %.1f", c, a, b);
            } else if (b >= a && b >= c) {
                printf("\n%.1f  %.1f  %.1f", a, b, c);
            } else {
                printf("\n%.1f  %.1f  %.1f", b, c, a);
            }
        }
    } else {
        printf("Digite 1, 2 ou 3 como primeiro numero");
    }

    return 0;
}