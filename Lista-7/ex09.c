#include<stdio.h>

void calcular(int h, int min) {
    printf("\nHoras que se passaram desde o comeco do dia: %d\nMinutos que se passaram desde o comeco do dia: %d\n",h, min);
}

int main() {
    int h, min;
    printf("\nIndique a hora e minuto: ");
    scanf("%d%d",&h,&min);
    calcular(h,min);

    return 0;
}