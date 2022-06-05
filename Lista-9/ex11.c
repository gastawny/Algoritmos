#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int neg=0, notas[200], acimamed=0;
float soma=0;

void f();
void inv();
void med();
void aprov();

int main() {
    f();
    inv();
    med();
    aprov();

    return 0;
}

void f() {
    int i, aux;
    srand(time(NULL));
    for(i=0;i<200;i++) {
        notas[i] = rand() % 11;
        do{
            for(aux=1;aux==1;) {
                aux = rand() % 11;
                if(aux==1) {
                    notas[i] = (-1) * notas[i];
                    neg++;
                }
            }
        }while(notas[i]<0);
        soma = soma + notas[i];
        if(notas[i]>=7)
            acimamed++;
    }
}

void inv() {
    printf("\nNumero de notas invalidas: %d",neg);
}

void med() {
    printf("\nMedia das notas validas: %.4f",soma/200);
}

void aprov() {
    printf("\nNumero de notas acima da media: %d\n",acimamed);
}