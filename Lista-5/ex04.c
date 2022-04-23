#include <stdio.h>
#include <math.h>

int main() {
    float x, a = 1, exp = 25, soma = 0, aux1 = -1, aux2 = 1, aux3;
    printf("Digite o valor de X para calcular o seguinte somatorio: S = X^25/1 - X^24/2 + X^23/3 - X^22/4 + ... + X/25\n");
    scanf("%f", &x);
    do{
        aux3 = aux1;
        aux1 = aux2;
        aux2 = aux3;
        soma = soma + aux1 * pow(x, exp) / a;
        exp--;
        a++;
    } while(a <= 25);
    printf("S = %f\n", soma);

    return 0;
}