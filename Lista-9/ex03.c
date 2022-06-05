#include<stdio.h>
#include<stdlib.h>
int v[1000];

int pergunta_n();
int calcula(int n);

int main() {
    int n, v[1000];
    n = pergunta_n();
    printf("\nO numero %d apareceu %d vezes em um vetor de 1000 elementos que variam de 0-99\n",n,calcula(n));

    return 0;
}

int pergunta_n() {
    int n;
    do{
        printf("\nDigite um numero de 0 a 99: ");
        scanf("%d",&n);
    }while(n<0||n>99);

    return n;
}

int calcula(int n) {
    int j=0, i;
    for(i=0;i<1000;i++) {
        v[i] = rand() % 100;
        if(n==v[i])
            j++;
    }

    return j;
}