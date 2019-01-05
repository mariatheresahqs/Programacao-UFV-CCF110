#include <stdio.h>

int main() {
    int linhas, colunas;
    linhas = 6;
    colunas = 3;
    int matriz[linhas][colunas], i=0, j=0, maior, maiorPosicaoLinha, maiorPosicaoColuna, menor, menorPosicaoLinha, menorPosicaoColuna;
    printf("Declare %d valores para uma matriz de %d linhas e %d colunas: \n ", (linhas*colunas),linhas, colunas);
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    maiorPosicaoLinha = 0;
    maiorPosicaoColuna=0;
    menor = matriz[0][0];
    menorPosicaoLinha = 0;
    menorPosicaoColuna=0;
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            if(matriz[i][i]>=maior) {
                maior = matriz[i][j];
                maiorPosicaoColuna=j;
                maiorPosicaoLinha=i;
            }
            else if (matriz[i][j]<=menor){
                menor=matriz[i][j];
                menorPosicaoColuna=j;
                menorPosicaoLinha =i;
            }
        }
    }
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("O maior elemento é %d e fica localizado na linha %d e coluna %d.\n", maior, maiorPosicaoLinha+1, maiorPosicaoColuna+1);
    printf("O menor elemento é %d e fica localizado na linha %d e coluna %d.\n", menor, menorPosicaoLinha+1, menorPosicaoColuna+1);
    return 0;
}