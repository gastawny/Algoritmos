#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;

int asd(int tam, int v[tam]);

int main() {
    int tam;
    srand(time(NULL));
    tam = rand() % 50 + 1;
    int v[tam], u[tam];
    printf("\nTamanhos dos vetores: %d\nVetor: ",tam);
    for(i=0;i<tam;i++) {
        v[i] = rand() % 101;
        printf("%d ",v[i]);
    }
    printf("\nVetor invertido: ");
    for(i=0;i<tam;i++) {
        u[i] = asd(tam,v);
        printf("%d ",u[i]);
    }

    return 0;
}

int asd(int tam, int v[tam]) {
    int u;
    u = v[tam-1-i];

    return u;
}