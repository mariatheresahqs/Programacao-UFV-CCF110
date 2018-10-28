#include <stdio.h>

int main() {
    int tamanho;
    tamanho =10;
    int vetor[tamanho], i;
    for(i=0; i<tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<tamanho;i++){
        if (vetor[i]==5){
            printf("Vetor[%d] = 5\n", (i+1));
        }
    }
    return 0;
}