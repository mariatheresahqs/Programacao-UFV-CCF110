#include <stdio.h>

int main() {
    int linhas, colunas, i, j;
    linhas = 3;
    colunas = 5;
    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizS[linhas][colunas], matrizD[linhas][colunas];
    printf("Declare %d valores para a matriz A:\n", linhas*colunas);
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d",&matrizA[i][j]);
        }
    }
    printf("Declare %d valores para a matriz B:\n", linhas*colunas);
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d",&matrizB[i][j]);
        }
    }
    printf("A matriz Soma, formada pela soma dos elementos de mesmo indice da matriz A e B, é:\n");
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            matrizS[i][j] = matrizA[i][j]+matrizB[i][j];
            printf("%d ", matrizS[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A matriz Diferença, formada pela diferença dos elementos de mesmo indice da matriz A e B, é:\n");
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            matrizD[i][j] = matrizA[i][j]-matrizB[i][j];
            printf("%d ", matrizD[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}