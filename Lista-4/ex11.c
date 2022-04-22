#include <stdio.h>

int main() {
    float med = 0;
    int idade, serie, livros, red, n = 1, tercserie = 0, naogostadered = 0, qtdlivros = 0, num = 0, aluno = 1;
    printf("Digite sua idade, serie (primeira-1, segunda-2, terceira-3 ou quarta-4),\nnumero de livros lidos por mes e se gosta de fazer redacao (Sim-1 ou Nao-0)\n");
    for (idade > 0; idade > 0; n++) {
        printf("Aluno %d: ", aluno);
        scanf("%d %d %d %d", &idade, &serie, &livros, &red);
        if (serie == 3) {
                tercserie++;
                if (red == 0)
                naogostadered++;
        } else if (serie == 1 || serie == 2) {
                med = med + idade;
                num++;
        } else
        if(livros > qtdlivros)
        qtdlivros = livros;
        aluno++;
    }
    printf("Quantidade de alunos que esta na terceira serie: %d\n", tercserie);
    printf("Maior quantidade de livros lidos por um aluno que esta na quarta serie: %d\n", qtdlivros);
    if (tercserie != 0)
    printf("Porcentagem de alunos que nao gostam de fazer redacao e que estao na terceira serie: %d%%\n", naogostadered*100/tercserie);
    if (num != 0)
    printf("Media de idade dos alunos da primeira e segunda series: %.2f\n", med/num);

    return 0;
}