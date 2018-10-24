#include <stdio.h>

int main() {
    int linhas, colunas;
    linhas=3;
    colunas=5;
    int matriz[linhas][colunas],i=0, j=0;
    printf("Digite %d valores para uma matriz de %d linhas e %d colunas:\n", (linhas*colunas), linhas, colunas);
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
