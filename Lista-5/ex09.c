#include <stdio.h>

int main() {
    int f = 150, c = 110, i = 0;    
    do{
        f = f + 2;
        c = c + 3;
        i++;
    } while (f >= c);
    printf("Ira demorar %d anos para Ciclano passar a altura de Fulano\n", i, f, c);

    return 0;
}