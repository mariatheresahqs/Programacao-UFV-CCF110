#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 30;
    int vetor[tamanho], variavelA,i, produto;

    for(i=0; i<tamanho; i++)
    {
        vetor[i]=0;
    }

    printf("Declare %d valores para um vetor: \n", tamanho);
    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Declare um valor para multiplicar cada elemento do vetor: \n");
    scanf("%d", &variavelA);
    for(i=0; i<tamanho; i++)
    {
        produto= variavelA*vetor[i];
        if (produto%2==0){
            printf("O produto de %d por %d é %d, que é par.\n", vetor[i], variavelA, produto);
        }
        else
        {
            printf("O produto de %d por %d é %d, que é ímpar.\n", vetor[i], variavelA, produto);
        }
    }
    return 0;
}
