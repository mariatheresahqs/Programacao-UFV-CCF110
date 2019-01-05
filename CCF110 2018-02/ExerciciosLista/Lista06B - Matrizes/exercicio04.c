#include <stdio.h>

int main() {
    int linhas, colunas, i=0, j=0;
    linhas=5;
    colunas=5;
    int matriz[linhas][colunas], soma=0, count=0;
    float media;
    printf("Declare %d valores para a matriz: \n", (linhas*colunas));
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
            if(i==j){
                soma+=matriz[i][j];
                count++;
            }
        }
    }
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    media = (float)soma/count;
    printf("\nA média dos elementos da diagonal é %.2f.\n", media);
    return 0;
}