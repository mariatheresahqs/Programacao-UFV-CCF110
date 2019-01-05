#include <stdio.h>

int main() {
    int tamanho, i, j;
    printf("Declare um valor para uma matriz quadrática: \n");
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho], matrizTransposta[tamanho][tamanho], simetria;
    for(i=0;i<tamanho;i++){
        for(j=0; j<tamanho;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<tamanho;i++){
        for(j=0; j<tamanho;j++){
            matrizTransposta[j][i]=matriz[i][j];
        }
    }
    printf("\n");
    for(i=0;i<tamanho;i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<tamanho;i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<tamanho;i++) {
        for (j = 0; j < tamanho; j++) {
            if (matriz[i][j] != matrizTransposta[i][j]) {
                simetria = 0;
                break;
            } else{
                simetria = 1;
            }
        }
    }
    if (simetria==0) {
        printf("Matrizes assimétricas.\n");
    } else{
        printf("Matrizes simétricas.\n");
    }
    return 0;
}