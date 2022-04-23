#include <stdio.h>

int main() {
    float a = 1000, c = -1, aux1 = 1, aux2, soma = 0, i = 1, b = 1;
    do{
        aux2 = c;
        c = aux1;
        aux1 = aux2;
        soma = soma + (c * a) / b;
        a = a - 3;
        b++;
        i++;
    } while(i <= 50);
    printf("S= 1000/1 – 997/2 + 994/3 -991/4 ... = %f\n", soma);

    return 0;
}