#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 20;
    int vetor[tamanho], i, temporario;
    for (i=0;i<tamanho;i++)
    {
        vetor[i]=0;
    }
    printf("Declare %d valores para o vetor:\n", tamanho);
    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("O vetor declarado foi: \n");
    for(i=0;i<tamanho;i++)
    {
        printf("%d, ", vetor[i]);
    }
    printf("\n\n");
    for(i=0;i<(tamanho/2);i++)
    {
        temporario=vetor[i];
        vetor[i]=vetor[tamanho-1-i];
        vetor[tamanho-1-i]=temporario;
    }
    printf("O novo vetor, após trocas, é: \n");
    for(i=0;i<tamanho;i++)
    {
        printf("%d, ", vetor[i]);
    }
    printf("\n\n");


    return 0;
}
