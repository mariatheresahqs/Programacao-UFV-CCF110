#include <stdio.h>

int main() {
    int vetor[6], contadorPositivo, contadorNegativo,i;
    for(i=0;i<6;i++)
    {
        vetor[i]=0;
    }
    printf("Declare seis valores: \n");
    for(i=0;i<6;i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i]>0)
        {
            contadorPositivo++;
        }
        else if (vetor[i]<0)
        {
            contadorNegativo++;
        }
    }
    printf("Foram declarados %d valores positivos "
           "e %d valores negativos", contadorPositivo,contadorNegativo);
    return 0;
}