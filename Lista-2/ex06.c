#include <stdio.h>

int main() {
    int RA;
    float nota1, nota2, nota3, MA, ME;
    printf("\nInforme o seu RA, nota com peso 1, nota com peso 2, nota com peso 3 e sua media de exercicios\n");
    scanf("%d %f %f %f %f", &RA, &nota1, &nota2, &nota3, &ME);
    MA = (nota1 + 2*nota2 + 3*nota3 + ME)/7;

    if (MA >= 9) {
        printf("\nAprovado\nConceito: A");
    } else if (MA < 9 && MA >= 7.5) {
        printf("\nAprovado\nConceito: B");
    } else if (MA < 7.5 && MA >= 6) {
        printf("\nAprovado\nConceito: C");
    } else if (MA < 6 && MA >= 4) {
        printf("\nReprovado\nConceito: D");
    } else if (MA < 4) {
        printf("\nReprovado\nConceito: E");
    } else {
        printf("\nDados invalidos");
    }

    return 0;
}