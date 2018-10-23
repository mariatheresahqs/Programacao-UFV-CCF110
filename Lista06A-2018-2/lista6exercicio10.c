#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 10;
    int vetor[tamanho], numero,i;
    for (i=0; i<tamanho; i++)
    {
        vetor[i]=0;
    }
    printf("Declare %d valores para um vetor: \n", tamanho);
    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Escolha um número para se comparar com os valores do vetor: \n");
    scanf("%d", &numero);
    for (i=0;i<tamanho;i++)
    {
        if(vetor[i]<numero)
        {
            printf("O valor %d é inferior ao valor %d declarado pra comparação.\n", vetor[i], numero);
        }
    }
    return 0;
}