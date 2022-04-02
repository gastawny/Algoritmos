#include <stdio.h>

int main() {
    int sexo;
    float h, peso;
    printf("Qual o seu sexo?\nDigite 1 para masculino, 0 para feminino\n");
    scanf("%d", &sexo);
    printf("Qual a sua altura em metros?\n");
    scanf("%f", &h);

    if (sexo == 1) {
        peso = (72.7 * h) - 58;
        printf("Seu peso ideal e: %.1f Kg\n", peso);
    } else {
        peso = (62.1*h)-44.7;
        printf("Seu peso ideal e: %.1f Kg\n", peso);
    }

    return 0;
}