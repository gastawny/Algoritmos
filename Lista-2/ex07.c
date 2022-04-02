#include <stdio.h>

int main() {
    int sexo;
    char nome[100];
    printf("\nInforme seu sexo e nome, para masculino digite 1, feminino 0:\n");
    scanf("%d %s", &sexo, &nome);

    if (sexo == 1) {
        printf("Ilmo Sr. %s", nome);
    } else if (sexo == 0) {
        printf("Ilma Sra. %s", nome);
    } else {
        printf("Digite corretamente");
    }
    
    return 0;
}