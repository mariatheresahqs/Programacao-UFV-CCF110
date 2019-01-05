#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 10;
    int vetor[tamanho], vetorB[tamanho], i;
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]<10){
            vetorB[i] = 1;
        } else{
            vetorB[i] = vetor[i];
        }
    }
    for(i=0;i<tamanho;i++){
        printf("Vetor1[%d] = %d\n", i, vetor[i]);
    }
    for(i=0;i<tamanho;i++){
        printf("Vetor2[%d] = %d\n", i, vetorB[i]);
    }
    return 0;
}