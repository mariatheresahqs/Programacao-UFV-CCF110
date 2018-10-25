#include <stdio.h>

int main() {
    int vetor[10], posicao, i;
    // Zerando as posicoes do vetor
    for (i=0; i<10; i++)
    {
        vetor[i] = 0;
    }

    printf("Declare 10 valores: \n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i]==5)
        {
            printf("O valor 5 foi armazenado na posicao %d\n", i);
        }
    }

    return 0;
}
