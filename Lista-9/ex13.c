#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int v[20], u[20], i, soma=0;
    srand(time(NULL));
    printf("Vetor v: ");
    for(i=0;i<20;i++) {
        v[i] = rand() % 101;
        u[i] = rand() % 101;
        soma = soma + v[i]*u[i];
        printf("%d ",v[i]);
    }
    printf("\nVetor u: ");
    for(i=0;i<20;i++)
        printf("%d ",u[i]);
    printf("\n\nProduto escalar dos vetores v e u: %d\n", soma);

    return 0;
}