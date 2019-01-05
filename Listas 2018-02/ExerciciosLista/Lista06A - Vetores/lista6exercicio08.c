#include <stdio.h>

int main() {
    int tamanho,i, maior, menor, maiorPosicao, menorPosicao;
    printf("Declare um tamanho, entre 0 e 50, para um vetor: \n");
    scanf("%d",&tamanho);
    while ((tamanho<0) || (tamanho>50))
    {
        printf("Declare um tamanho, entre 0 e 50, para os vetores: \n");
        scanf("%d",&tamanho);
    }


    int vetor[tamanho];
    printf("Declare %d valores para o vetor: \n", tamanho);
    //Leitura dos valores do vetor
    for (i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 0; i < tamanho; i++)
    {
        if(vetor[i]>=maior)
        {
            maior = vetor[i];
            maiorPosicao = i;
        }
        if (vetor[i]<=menor)
        {
            menor = vetor[i];
            menorPosicao = i;
        }
    }
    printf("O maior valor do vetor é %d, e sua índice é %d. \nO menor valor do vetor é %d, e sua índice é %d. \n\n", maior, maiorPosicao, menor,menorPosicao);

    return 0;
}
