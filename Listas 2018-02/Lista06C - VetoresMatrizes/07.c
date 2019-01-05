#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 5;
    int vetor1[tamanho], vetor2[tamanho], vetorSoma[tamanho], i;
    printf("Declare %d valores para o vetor 1:\n",tamanho);
    for (i=0; i<tamanho;i++){
        scanf("%d", &vetor1[i]);
    }
    printf("Declare %d valores para o vetor 2:\n", tamanho);
    for (i=0; i<tamanho;i++){
        scanf("%d", &vetor2[i]);
    }
    printf("Os elementos do vetor 3, derivados da soma entre os elementos de mesmo indice do vetor 1 e 2, é:\n");
    for (i=0; i<tamanho;i++){
        vetorSoma[i] = vetor1[i]+vetor2[i];
    }
    for (i=0; i<tamanho;i++){
        printf("%d, ", vetorSoma[i]);
    }
    return 0;
}