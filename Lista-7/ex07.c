#include<stdio.h>

void calcular(int valor) {
    int n100, n50, n10, n5, n1;
    n100 = valor / 100;
    n50 = valor % 100;
    n10 = n50 % 50;
    n5 = n10 % 10;
    n1 = n5 % 5;
    printf("\n\nNotas de 100 reais: %d\nNotas de 50 reais: %d\nNotas de 10 reais: %d\nNotas de 5 reais: %d\nNotas de 1 real: %d\n",n100,n50/50,n10/10,n5/5,n1);
}

int main() {
    int valor;
    do{
        printf("\nDigite um valor para saber as notas do troco: ");
        scanf("%d",&valor);
    }while(valor<=0);
    calcular(valor);

    return 0;
}