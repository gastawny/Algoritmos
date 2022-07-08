#include<stdio.h>

int main() {
    int n, m, i, j, aux1;
    scanf("%d%d",&n,&m);
    int a[m][n], v[m], u[m], aux2;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            a[i][j] = 0;
        v[i] = 0;
        u[i] = 0;
    }
    scanf("%d",&aux2);
    for(i=0;i<aux2;i++) {
        scanf("%d",&aux1);
        v[aux1-1] = 1;
        u[aux1-1] = 1;
    }
    for(i=0;i<n;i++) {
        scanf("%d",&j);
        for(;j>0;j--) {
            scanf("%d",&aux1);
            a[aux1-1][i] = 1;
        }
    }
    int flag, cont, contsaida=1, soma=0;
    for(i=0,flag=0,aux1=0;flag==0;i++) {
        if(i==n)
            i=0;
        for(j=0,cont=0,aux2=0;j<m;j++) {
            if(a[j][i]==1) {
                if(v[j]==1)
                    v[j] = 0;
                else
                    v[j] = 1;
                aux1 = aux1 + v[j];
            }
            if(v[j]==u[j])
                aux2++;
            if(v[j]==0)
                cont++;
        }
        if(aux2==m&&contsaida>1) {
            if(soma==0)
                soma = aux1;
            if(aux1==2*soma) {
                flag = 1;
                break;
            }
        }
        if(cont==m)
            break;
        contsaida++;
    }
    if(flag==1)
        printf("-1\n");
    else
        printf("%d\n",contsaida);
    
    return 0;
}