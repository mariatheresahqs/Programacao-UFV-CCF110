#include <stdio.h>

int main() {
    int variavelN;
    printf("Declare um tamanho para os vetores: \n");
    scanf("%d",&variavelN);

    int vetorA[variavelN],vetorB[variavelN], vetorC[variavelN],i;
    float vetorD[variavelN], soma;

    for(i=0; i<variavelN;i++)
    {
        vetorA[i]=0;
        vetorB[i]=0;
        vetorC[i]=0;
        vetorD[i]=0;
    }

    printf("Declare %d valores para o vetor A: \n", variavelN);
    for(i=0;i<variavelN;i++)
    {
        scanf("%d", &vetorA[i]);
    }
    printf("Declare %d valores para o vetor B: \n", variavelN);
    for(i=0;i<variavelN;i++)
    {
        scanf("%d", &vetorB[i]);
    }
    for(i=0;i<variavelN;i++)
    {
        if(vetorA[i]>=vetorB[i])
        {
            vetorC[i]=vetorA[i];
        }
        else
        {
            vetorC[i]=vetorB[i];
        }
        soma = vetorA[i]+vetorB[i];
        vetorD[i]= soma/2;
    }

    printf("O vetor formado pelos maiores valores por índice entre os valores dos vetores declarados é: \n");
    for(i=0;i<variavelN;i++)
    {
        printf("%d, ", vetorC[i]);
    }
    printf("\n\n");
    printf("O vetor formado pela média dos valores por índice entre os valores dos vetores declarados é: \n");
    for(i=0;i<variavelN;i++)
    {
        printf("%.2f, ", vetorD[i]);
    }
    printf("\n\n");

    return 0;
}
