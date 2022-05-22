#include<stdio.h>
#include<math.h>

void qtdDeDegrau(int degrau, float h) {
    printf("\nSerao necessarios %.0f degraus para subir %.2f metros\n",ceil(h*100/degrau),h);
}

int main() {
    int degrau;
    float h;
    printf("\nDigite a altura que deseja subir em metros e a altura do degrau em centimetros: ");
    scanf("%f%d",&h,&degrau);
    qtdDeDegrau(degrau, h);

    return 0;
}