#include <stdio.h>

float notas(float *NotasVetor, int quantidadeProvas, char operacao){
    float media, soma=0;
    int i;
    if(operacao=='A'){
        for(i=0;i<quantidadeProvas;i++){
            soma+= NotasVetor[i];
        }
        media = soma/quantidadeProvas;
    } else if(operacao=='P'){
        media = ((NotasVetor[0]*5)+(NotasVetor[1]*3)+(NotasVetor[2]*2))/10;
    }
    return media;
}

int main() {
    int numeroProvas,i;
    printf("Declare a quantidade de provas:\n");
    scanf("%d", &numeroProvas);
    float vetorNotas[numeroProvas], media;
    char operacao;
    for(i=0;i<numeroProvas;i++){
        printf("Declare a nota %d:\n", i+1);
        scanf("%f", &vetorNotas[i]);
    }
    printf("Declare a operação desejada:\n");
    scanf(" %c", &operacao);
    media = notas(&vetorNotas, numeroProvas, operacao);
    printf("O resultado da média é %.2f.\n", media);
    return 0;
}