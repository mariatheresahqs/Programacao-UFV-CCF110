#include <stdio.h>
#include <math.h>

int main() {
    int tamanho;
    tamanho =10;
    int vetor[tamanho], i;
    printf("Declare %d valores para um vetor: \n", tamanho);
    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<tamanho;i++)
    {
        vetor[i]=pow(vetor[i],2);
    }
    printf("\nOs quadrados dos valores declarados são: \n");
    for(i=0;i<tamanho;i++)
    {
        printf("%d, ",vetor[i]);
    }
    return 0;
}