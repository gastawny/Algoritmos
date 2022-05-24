#include<stdio.h>

int h(int seg);
int m(int seg);
int s(int seg);

int main() {
    int seg;
    do{
        printf("\nDigite em segundos a duracao da corrida: ");
        scanf("%d",&seg);
    }while(seg<0);
    printf("%d:%d:%d",h(seg),m(seg),s(seg));

    return 0;
}

int h(int seg) {
    int horas;
    horas = seg / 3600;

    return horas;
}

int m(int seg) {
    int minutos;
    minutos = seg % 3600 / 60;

    return minutos;
}

int s(int seg) {
    int segundos;
    segundos = seg - 60*m(seg) - 3600*h(seg);

    return segundos;
}