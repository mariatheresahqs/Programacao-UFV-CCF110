#include <stdio.h>

int main() {
    int tamanho;
    printf ("Declare o tamanho do vetor: \n");
    scanf("%d", &tamanho);

    int vetor[tamanho], i, soma=0;
    for(i=0;i<tamanho;i++){
        vetor[i]=0;
    }
    printf("Declare %d valores para o vetor:\n", tamanho);
    for(i=0;i<tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        if(i%2==0)
        {
            soma=vetor[i]+soma;
        }
    }
    printf("A soma de todos os elementos de índice par é %d.", soma);
    return 0;
}
