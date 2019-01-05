#include <stdio.h>

int main() {
    int C, D, E, F;
    do {
        printf("Declare duas dimensões para uma matriz A: \n");
        scanf("%d %d", &C, &D);
        printf("Declare duas dimensões para uma matriz B: \n");
        scanf("%d %d", &E, &F);
    } while ((C>6 || C<0) || (D>6 ||  D<0) || (E>6 || E<0) || (F>6 || F<0) );

    int matrizA[C][D], matrizB[E][F], matrizG[C][F], i, j, t=0, m=0, produto,soma=0, coluna=0;
    printf("Declare os elementos da matriz A:\n");
    for(i=0; i<C; i++){
        for(j=0;j<D;j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Declare os elementos da matriz B:\n");
    for(i=0; i<E; i++){
        for(j=0;j<F;j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("Matriz A declarada:\n");
    for(i=0; i<C; i++){
        for(j=0;j<D;j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B declarada:\n");
    for(i=0; i<E; i++){
        for(j=0;j<F;j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if (D!=E){
        printf("Não há produto matricial entre as matrizes A e B.\n");
    }
// Calculo e mostra da matriz produto
    else {
        for(i=0;i<C;i++) {
            for (j = 0; j < F; j++) {
                matrizG[i][j]=0;
                //Roda o tamanho comum entre coluna e linha das duas matrizes
                for(t=0;t<E;t++) {
                    produto = (matrizA[i][t] * matrizB[t][j]);
                    matrizG[i][j] += produto;
                }
            }
        }
    }
    for(i=0; i<C; i++){
        for(j=0;j<F;j++){
            printf("%d ", matrizG[i][j]);
        }
        printf("\n");
    }
     return 0;
}