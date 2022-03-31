#include <stdio.h>

int main() {
    double salary,value,total;
    char string[100];
    gets (string);
    scanf(" %lf %lf", &salary, &value);
    total = salary+value*.15;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}