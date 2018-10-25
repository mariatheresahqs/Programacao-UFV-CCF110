#include <stdio.h>

int main() {
    int vetorA[6],i, soma;
    soma = 0;

    vetorA[0]=15;
    vetorA[1]=20;
    vetorA[2]=3;
    vetorA[3]=1;
    vetorA[4]=26;
    vetorA[5]=2;

    for (i=0; i<6;i++)
    {
        soma = vetorA[i] + soma;
    }

    printf("A soma dos elementos do vetor é: %d\n", soma);

    return 0;
}
