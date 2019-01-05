#include <stdio.h>

int main() {
    int tamanho;
    tamanho =6;
    int vetor[tamanho], i, qntPositivo=0, qntNegativo=0;
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<tamanho;i++){
        if(vetor[i]>0){
            qntPositivo++;
        }
        else if(vetor[i]<0){
            qntNegativo++;
        }
    }
    printf("O vetor possui %d valores positivos e %d valores negativos.\n", qntPositivo, qntNegativo);
    return 0;
}