#include <stdio.h>

int main() {
    int tamanho;
    tamanho =10;
    int vetor1[tamanho], vetor2[tamanho], vetorResultante[2*tamanho], i, somador;
    somador=0;

    printf("Declare dez valores para um vetor 1: \n");
    for (i=0;i<tamanho;i++)
    {
        scanf("%d",&vetor1[i]);
    }
    printf("Declare dez valores para um vetor 2: \n");
    for (i=0;i<tamanho;i++)
    {
        scanf("%d",&vetor2[i]);
    }
    for (i=0;i<tamanho;i++)
    {
        vetorResultante[i*2]=vetor1[i];
        somador++;
        vetorResultante[i+somador]=vetor2[i];

    }
    for (i=0;i<(tamanho*2);i++)
    {
        printf("%d, ",vetorResultante[i]);
    }


    return 0;
}