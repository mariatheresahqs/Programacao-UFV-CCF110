#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 5;
    int vetorA[tamanho], vetorB[tamanho], vetorResultante[tamanho], i;

    for (i=0; i<tamanho;i++)
    {
        vetorA[i]=0;
        vetorB[i]=0;
        vetorResultante[i]=0;
    }
    printf("Declare %d valores para o vetor A: \n", tamanho);
    for (i=0;i<tamanho;i++)
    {
        scanf("%d", &vetorA[i]);
    }
    printf("Declare %d valores para o vetor B: \n", tamanho);
    for (i=0;i<tamanho;i++)
    {
        scanf("%d", &vetorB[i]);
    }
    for (i=0; i<tamanho ; i++)
    {
        vetorResultante[i]= vetorA[i]+vetorB[i];
    }
    printf("O vetor resultante da soma dos valores de mesmo índice "
           "dos vetores A e B é: \n");
    for (i = 0;  i<tamanho ; i++)
    {
        printf("%d, ", vetorResultante[i]);
    }
    printf("\n\n");
    return 0;
}
