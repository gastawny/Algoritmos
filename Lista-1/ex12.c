#include <stdio.h>

int main() {
    int code1, code2, number1, number2;
    float price1, price2, total;
    scanf("%d %d %f", &code1, &number1, &price1);
    scanf("%d %d %f", &code2, &number2, &price2);
    total = number1 * price1 + number2 * price2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}