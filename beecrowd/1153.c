#include <stdio.h>

int main() {
    long int n, i, fat;
    scanf("%ld", &n);
    for(i=1, fat=n; i<n; i++)
        fat = fat * (n-i);
    printf("%ld\n", fat);

    return 0;
}