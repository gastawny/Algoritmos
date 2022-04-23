#include <stdio.h>

int main() {
    int preferencia, sexo, i = 1, n = 1, gostou = 0, naogostou = 0, mascnao = 0, femsim = 0, masc = 0, fem = 0;
    printf("Digite seu sexo (1-Masculino ou 2-Feminino) e se gostou do novo produto (1-Sim ou 2-Nao)\n\n");
    do{
        printf("Pessoa %d:", n);
        scanf("%d %d", &sexo, &preferencia);
        if(preferencia == 1) {
            if(sexo == 1)
            masc++;
            if(sexo == 2)
            femsim++;
            gostou++;
        } else if(preferencia == 2) {
            if(sexo == 1)
            mascnao++;
            if(sexo == 2)
            fem++;
            naogostou++;
        }
        n++;
        i++;
    } while (i <= 2000);
    printf("\nNumero de pessoas que responderam sim: %d\nNumero de pessoas que responderam nao: %d\n",  gostou, naogostou);
    if(fem != 0 || femsim !=0)
    printf("Porcentagem de pessoas do sexo feminino que responderam sim: %d%%\n", femsim*100 / (fem+femsim));
    if(masc != 0 || mascnao != 0)
    printf("Porcentagem de pessoas do sexo masculino que responderam nao: %d%%\n", mascnao*100 / (masc+mascnao));

    return 0;
}