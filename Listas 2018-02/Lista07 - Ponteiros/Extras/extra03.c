#include <stdio.h>

int main() {
    int tamanho, i, j;
    tamanho = 100;
    int matriz [tamanho][tamanho], *ponteiroMatriz;
    ponteiroMatriz = &matriz[0][0];
    for(i=1; i<=(tamanho*tamanho);i++){
            *(ponteiroMatriz+i)=0;

    }
    for(i=0; i<(tamanho);i++){
        for(j=0;j<tamanho;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<(tamanho*tamanho);i++){
        *(ponteiroMatriz+i)= i+1;

    }
    printf("\n");
    for(i=0; i<(tamanho);i++){
        for(j=0;j<tamanho;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}