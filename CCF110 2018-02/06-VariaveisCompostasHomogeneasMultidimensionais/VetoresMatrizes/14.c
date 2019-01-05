#include <stdio.h>

int main() {
    int linhas, colunas, i, j;
    linhas = 5;
    colunas = 5;
    int matriz[linhas][colunas];
    float soma=0, media;
    printf("Declare %d valores para uma matriz:\n", linhas*colunas);
    for(i=0;i<linhas;i++){
        for(j=0; j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<linhas;i++){
        for(j=0; j<colunas;j++){
            if(i==j){
                soma += matriz[i][j];
            }
        }
    }
    media = soma/linhas;
    printf("A média dos valores da diagonal principal é %.2f.\n", media);
    return 0;
}
