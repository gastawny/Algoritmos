#include <stdio.h>

int main() {
    float n = 1, sexo, idade, livros, livrosmenor10 = 0, livrosmulheres = 0, medhomens = 0, qtdhomens = 0, naoleramlivros = 0;       
    printf("Digite o seu sexo (0-Masculino, 1-Feminino), idade e quantidade de livros lidos no ano de 2010");
    for (idade >= 0; idade >= 0; n++) {
        printf("\nEntrevistado %.0f: ", n);
        scanf("%f %f %f", &sexo, &idade, &livros);
        if (idade < 10)
        livrosmenor10 = livrosmenor10 + livros;
        if (sexo == 0){
            if (livros < 5) {
                medhomens = medhomens + idade;
                qtdhomens++;
            }
        }
        if (sexo == 1)
        if (livros >= 5)
        livrosmulheres++;
        if (livros == 0)
        naoleramlivros++;
    }
    printf("\n\nQuantidade total de livros lidos pelos entrevistados menores de 10 anos: %.0f\nQuantidade de mulheres que leram 5 livros ou mais: %.0f\nMedia de idade dos homens que leram menos que 5 livros: %.2f\nPercentual de pessoas que nao leram livros: %.0f%%", livrosmenor10, livrosmulheres, medhomens / qtdhomens, naoleramlivros*100/(n));

    return 0;
}