#include <stdio.h>

int main() {
    int linhas, colunas, i=0,j=0;
    linhas = 10;
    colunas = 10;
    int matriz[linhas][colunas];
    printf("Declare %d valores para uma matriz: \n", (linhas*colunas));
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A diagonal secundária da matriz declarada é: \n");
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            if(i==(linhas-1-j)) {
                printf("%d ", matriz[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}