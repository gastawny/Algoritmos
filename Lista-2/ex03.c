#include <stdio.h>

int main() {
    int A, B, C, D;
    printf("Insira 4 numeros A, B, C e D, respectivamente:\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A % 2 == 0 && A % 3 == 0) {
        printf("\nA e divisivel por 2 e por 3");
    } else if (A % 2 == 0) {
         printf("\nA e divisivel por 2");
    } else if (A % 3 == 0) {
        printf("\nA e divisivel por 3");
    } else {
        printf("\nA nao e divisivel por 2 nem 3");
    }

    if (B % 2 == 0 && B % 3 == 0) {
        printf("\nB e divisivel por 2 e por 3");
    } else if (B % 2 == 0) {
         printf("\nB e divisivel por 2");
    } else if (B % 3 == 0) {
        printf("\nB e divisivel por 3");
    } else {
        printf("\nB nao e divisivel por 2 nem 3");
    }

    if (C % 2 == 0 && C % 3 == 0) {
        printf("\nC e divisivel por 2 e por 3");
    } else if (C % 2 == 0) {
         printf("\nC e divisivel por 2");
    } else if (C % 3 == 0) {
        printf("\nC e divisivel por 3");
    } else {
        printf("\nC nao e divisivel por 2 nem 3");
    }

    if (D % 2 == 0 && D % 3 == 0) {
        printf("\nD e divisivel por 2 e por 3");
    } else if (D % 2 == 0) {
         printf("\nD e divisivel por 2");
    } else if (D % 3 == 0) {
        printf("\nD e divisivel por 3");
    } else {
        printf("\nD nao e divisivel por 2 nem 3");
    }


    return 0;
}