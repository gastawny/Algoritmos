#include <stdio.h>

int main() {
    float indice;
    printf("\nDigite o indice de poluicao do meio ambiente\n");
    scanf("%f", &indice);

    if (indice >= 0.05 && indice < 0.25) {
        printf("\nO indice de poluicao esta aceitavel");
    } else if (indice < 0.3) {
        printf("\nAs industrias do 1o grupo devem suspender suas atividades");
    } else if (indice < 0.4) {
        printf("\nAs industrias do 1o grupo e 2o devem suspender suas atividades");
    } else {
        printf("\nTodos os tres grupos devem paralisar suas atividades");
    }

    return 0;
}