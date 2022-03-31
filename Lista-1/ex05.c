#include <stdio.h>

int main() {
    double A, B, med;
    scanf("%lf %lf",&A ,&B);
    med = (3.5*A+7.5*B)/11;
    printf("MEDIA = %.5lf\n",med);

    return 0;
}