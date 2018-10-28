#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 30;
    int vetor[tamanho], i, maior, menor;
    printf("Declare %d valores para um vetor:\n", tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for(i=0;i<tamanho;i++){
        if(vetor[i]> maior){
            maior = vetor[i];
        }
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }
    printf("O maior valor do vetor é %d, e o menor valor do vetor é %d.\n", maior, menor);
    return 0;
}