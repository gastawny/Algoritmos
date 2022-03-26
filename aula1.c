#include <stdio.h>

void main() {
    int A, B, aux;
    printf("Informe um numero, depois o outro");
    scanf("%d",&A);
    scanf("%d",&B);
    aux = A;
    A = B;
    B = aux;
    printf("%d  %d  %d",A, B, aux);
}