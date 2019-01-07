#include <stdio.h>

int main() {
    int tamanho, contador;
    tamanho = 100;
    contador = 1;
    int matriz[tamanho][tamanho], *enderecos[tamanho][tamanho], i, j;
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            enderecos[i][j] = &matriz[i][j];
        }
    }
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            *enderecos[i][j] = 0;
        }
    }
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            *enderecos[i][j] = contador;
            contador++;
        }
    }
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}