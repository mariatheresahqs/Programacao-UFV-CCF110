#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 10;
    int vetor1[tamanho], vetor2[tamanho], i;
    for(i=0;i<tamanho;i++)
    {
        vetor1[i]=0;
        vetor2[i]=0;
    }
    printf("Declare %d valores para o vetor: \n", tamanho);
    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor1[i]);
    }
    for(i=0;i<tamanho;i++)
    {
        vetor2[tamanho-1-i]=vetor1[i];
    }
    printf("Os vetores resultantes são: \n");
    printf("Vetor1:\n");
    for(i=0;i<10;i++)
    {
        printf("%d, ", vetor1[i]);
    }
    printf("\n\n");
    printf("Vetor2:\n");
    for(i=0;i<10;i++)
    {
        printf("%d, ", vetor2[i]);
    }
    return 0;
}