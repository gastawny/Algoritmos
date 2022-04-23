#include <stdio.h>

int main() {
    float a = -5, b = 500, i = 1, aux1 = 2, aux2, soma = 0;
    do{
        aux2 = a;
        a = aux1;
        aux1 = aux2;
        soma = soma + a / b;
        b = b - 50;
        i++;
    } while(i <= 10);
    printf("A soma dos 10 primeiros termos da serie 2/500 - 5/450 + 2/400 - 5/350 + ... = %f\n", soma);

    return 0;
}