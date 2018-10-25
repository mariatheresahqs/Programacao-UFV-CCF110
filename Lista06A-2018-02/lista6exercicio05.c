#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorResultante[20], i, somador;
    somador=0;
    for (i=0;i<10;i++)
    {
        vetor1[i]=0;
        vetor2[i]=0;
        vetorResultante[i]=0;
    }
    printf("Declare dez valores para um vetor 1: \n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&vetor1[i]);
    }
    printf("Declare dez valores para um vetor 2: \n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&vetor2[i]);
    }
    for (i=0;i<10;i++)
    {
       vetorResultante[i*2]=vetor1[i];
       somador++;
       vetorResultante[i+somador]=vetor2[i];

    }
    for (i=0;i<20;i++)
    {
        printf("%d, ",vetorResultante[i]);
    }


    return 0;
}
