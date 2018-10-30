#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    tamanho=10;
    int vetor[tamanho],enderecos[10],i;
    for(i=0;i<tamanho;i++){
        vetor[i] = rand();
        enderecos[i] = &vetor[i];
    }
    for(i=0;i<tamanho;i++) {
        printf("Vetor[%d] = %d, endereço %d.\n", i, vetor[i], &vetor[i]);
    }
    return 0;
}