#include <stdio.h>
int main() {
    int linhas, colunas, i, j;
    linhas = 10;
    colunas = 10;
    int matriz[linhas][colunas], temporarioLinha, temporarioColuna, temporarioDiagonal,
    colunaTroca1, colunaTroca2, linhaTroca1, linhaTroca2;
    colunaTroca1 = 4;
    colunaTroca2 = 10;
    linhaTroca1 = 2;
    linhaTroca2 = 8;
    printf("Declare %d valores para uma matriz: \n", (linhas*colunas));
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            if (i == (linhaTroca1 - 1)) {
                temporarioLinha = matriz[linhaTroca1-1][j];
                matriz[linhaTroca1-1][j] = matriz[linhaTroca2-1][j];
                matriz[linhaTroca2-1][j] = temporarioLinha;
            }
        }
    }
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            if (j == (colunaTroca1 - 1)) {
                temporarioColuna = matriz[i][(colunaTroca1 - 1)];
                matriz[i][(colunaTroca1 - 1)] = matriz[i][(colunaTroca2 - 1)];
                matriz[i][(colunaTroca2 - 1)] = temporarioColuna;
            }
        }
    }
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            if (i==j) {
                temporarioDiagonal = matriz[i][i];
                matriz[i][i] = matriz[i][colunas-1-i];
                matriz[i][colunas-1-i] = temporarioDiagonal;
            }

        }
    }
    printf("\n");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}