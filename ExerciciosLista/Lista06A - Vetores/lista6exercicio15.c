#include <stdio.h>
#include <math.h>

int main() {
    int tamanho;
    tamanho=15;
    int vetor[tamanho],i;

    printf("Declare %d valores para um vetor:\n", tamanho);
    for(i=0;i<tamanho;i++) {
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<tamanho;i++) {
        if (vetor[i]<0) {
            vetor[i]=-1;
        }
        else {
            vetor[i] = pow(vetor[i], 2);
        }
    }
    printf("\nO novo vetor é:\n");
    for(i=0;i<tamanho;i++)
    {
        printf("%d, ", vetor[i]);
    }
    printf("\n");
    return 0;
}
