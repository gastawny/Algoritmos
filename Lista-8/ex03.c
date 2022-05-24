#include<stdio.h>

float resto(float saco, float racao1, float racao2);

int main() {
    float saco, racao1, racao2;
    do{
        printf("\nDigite o peso do saco de racao em quilos e a quantidade em gramas fornecida para cada gato: ");
        scanf("%f%f%f",&saco,&racao1,&racao2);
    }while(saco<=0||racao1<0||racao2<0);
    printf("Apos 5 dias restara: %.2f kg\n",resto(saco, racao1, racao2));
    
    return 0;
}

float resto(float saco, float racao1, float racao2) {
    int resto;
    resto = saco - (racao1+racao2)/200;

    return resto;
}
