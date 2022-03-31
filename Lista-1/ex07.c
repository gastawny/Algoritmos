#include <stdio.h>

int main() {
    int number, hours;
    float salary_per_hour, salary;
    scanf("%d %d %f", &number, &hours, &salary_per_hour);
    salary = salary_per_hour*hours;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);

    return 0;
}