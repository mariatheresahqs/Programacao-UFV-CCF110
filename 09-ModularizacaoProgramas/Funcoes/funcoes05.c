#include <stdio.h>

int maiorElemento(int dimensao, int *vetorElementos){
    int i, elementoMaior;
    elementoMaior = vetorElementos[0];
    for(i=0;i<dimensao;i++){
        if(vetorElementos[i]>elementoMaior){
            elementoMaior = vetorElementos[i];
        }
    }
    return elementoMaior;
}

int main() {
    int tamanho, maior;
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);
    int vetor[tamanho], i;
    printf("Declare %d valores para o vetor:\n", tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    maior = maiorElemento(tamanho, vetor);
    printf("O maior elemento declarado para o vetor é: %d.\n", maior);
    return 0;
}