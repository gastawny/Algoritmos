#include <stdio.h>

int main() {
    int n, A, B, C, D;
    printf("Digite 5 numeros para formar os intervalos [A,B] e [C,D] e um numero n, A, B, C, D\n");
    scanf("%d %d %d %d %d", &n, &A, &B, &C, &D);

    if (n>=A && n<=B && n>=C && n<=D) {
        printf("\nn esta dentro dos intervalos [%d,%d],[%d,%d]", A, B, C, D);
    } else if (n>=A && n<=B) {
        printf("\nn esta dentro do intervalo [%d,%d]", A, B);
    } else if (n>=C && n<=D) {
        printf("\nn esta dentro do intervalo [%d,%d]", C, D);
    } else {
        printf("\nn nao esta dentro dos intervalos [%d,%d],[%d,%d]", A, B, C, D);
    } 
    

    return 0;
}