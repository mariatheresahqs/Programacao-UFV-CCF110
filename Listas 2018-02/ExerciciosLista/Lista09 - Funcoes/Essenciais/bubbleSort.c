#include <stdio.h>

int main() {
    void ordenacaoCrescente (int vetor[], int tamanho);
    int vetor[10]  = {3,2,5,8,9,0,1,4,6,7}, i;

    ordenacaoCrescente(vetor, 10);
    printf("\n");
    for (i=0;i<10;i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}

void ordenacaoCrescente(int vetor[], int tamanho){
    int i, j, temporario;
    for(i=0;i<tamanho;i++){
        for(j=i+1;j<tamanho;j++){
            if(vetor[i]>vetor[j]){
                temporario = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporario;
            }
        }
    }
}