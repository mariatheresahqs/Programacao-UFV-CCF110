#include <stdio.h>

int main() {
    int linhas, colunas,i=0,j=0;
    linhas = 3;
    colunas = 5;
    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizS[linhas][colunas], matrizD[linhas][colunas];
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            matrizS[i][j]=0;
            matrizD[i][j]=0;
        }
    }
    printf("Declare %d valores para a matrizA: \n", (linhas*colunas));
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Declare %d valores para a matrizB: \n", (linhas*colunas));
    for(i=0; i<linhas;i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
    //Calculo da soma e difereca entre as matrizes
    for(i=0; i<linhas;i++) {
        for (j = 0; j < colunas; j++) {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    //Mostra os resultados de soma e diferenca entre as matrizes
    printf("\nA soma entre as matrizes resulta na matriz: \n");
    for(i=0; i<linhas;i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ",matrizS[i][j]);
        }
        printf("\n");
    }
    printf("\nA diferença entre as matrizes resulta na matriz: \n");
    for(i=0; i<linhas;i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ",matrizD[i][j]);
        }
        printf("\n");
    }
    return 0;
}