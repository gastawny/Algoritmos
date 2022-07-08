#include<stdio.h>
#include<string.h>
#define tam 4

int main() {
    int idade[tam], i, j, otimo=0, bom=0, regular=0, ruim=0, pessimo=0, idadepessimo=0, idadeotimo=0, idaderuim=0;
    char op[6];
    for(i=0;i<tam;i++) {
        printf("\n(Pesquisado %d) Digite sua idade: ",i+1);
        scanf("%d",&idade[i]);
        printf("Digite sua opiniao em relacao ao filme, segundo:\nOtimo = *****\nBom = ****\nRegular = ***\nRuim = **\nPessimo = *\n: ");
        setbuf(stdin,NULL);
        fgets(op,6,stdin);

        if(strcmp(op,"***")==0)
            regular++;
        else if(strcmp(op,"****")==0)
            bom++;
        else if(strcmp(op,"*****")==0) {
            otimo++;
            if(idade[i]>idadeotimo)
                idadeotimo = idade[i];
        } else if(strcmp(op,"**")==0) {
            ruim = ruim + idade[i];
            if(idade[i]>idaderuim)
                idaderuim = idade[i];
        }
        else {
            pessimo++;
            if(idade[i]>idadepessimo)
                    idadepessimo = idade[i];
        }
    }

    printf("\n\n");
    printf("\nQuantidade de respostas otimo: %d",otimo);
    if(bom>0||regular>0)
        printf("\nDiferenca percentual entre bom e regular: %.2f%%",((float)bom*100/tam)-((float)regular*100/tam));
    if(ruim>0)
        printf("\nMedia de idade das pessoas que responderam ruim: %.4f",(float)ruim/tam);
    if(pessimo>0)
        printf("\nPorcentagem de respostas pessimo e a maior idade que utilizou esta opcao: %.2f%% e %d anos",(float)pessimo*100/tam,idadepessimo);
    if(otimo>0||ruim>0)
        printf("\nDiferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d",(idadeotimo-idaderuim));
    printf("\n");

    return 0;
}