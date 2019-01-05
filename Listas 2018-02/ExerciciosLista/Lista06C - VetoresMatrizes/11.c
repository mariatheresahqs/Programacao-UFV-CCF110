#include <stdio.h>

int main() {
    int linhas, colunas, i, j, qnt=0;
    linhas = 3;
    colunas = 5;
    int matriz[linhas][colunas];
    printf("Declare %d elementos para uma matriz:\n", linhas*colunas);
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            if(matriz[i][j]>15 && matriz[i][j]<20){
                qnt++;
            }
        }
    }
    printf("A matriz possui %d elementos entre 15 e 20.\n", qnt);
    return 0;
}