#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], i;
    for (i=0;i<10;i++)
    {
        vetor1[i]=0;
        vetor2[i]=0;
    }
    printf("Declare 10 valores: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&vetor1[i]);
        if(vetor1[i]<10)
        {
            vetor2[i]=1;
        }
        else
        {
            vetor2[i]=vetor1[i];
        }
    }
    printf("O vetor dos valores declarados é: \n");
    for(i=0;i<10;i++)
    {
        printf("%d, ", vetor1[i]);
    }
    printf("\n\n");
    printf("O vetor em que os valores menores que 10 "
           "foram substituidos é: \n");
    for(i=0;i<10;i++)
    {
        printf("%d, ", vetor2[i]);
    }
    printf("\n");
    return 0;
}
