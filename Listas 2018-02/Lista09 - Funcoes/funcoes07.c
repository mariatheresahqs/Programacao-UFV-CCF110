#include <stdio.h>

int pesquisa (int *vetorPesquisa, int tamanhoPesquisa, int valorPesquisa){
    int posicao=-1, i;
    for(i=0;i<tamanhoPesquisa;i++){
        if(vetorPesquisa[i]==valorPesquisa){
            posicao = i;
        }
    }
    return posicao;
}

int main() {
    int tamanho;
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);
    int vetor[tamanho], i, pesquisaValor, resultadoPesquisa;
    printf("Declare os valores do vetor:\n");
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    printf("Declare o valor a ser pesquisado:\n");
    scanf("%d", &pesquisaValor);
    resultadoPesquisa = pesquisa(vetor, tamanho, pesquisaValor);
    if(resultadoPesquisa==-1){
        printf("Valor não encontrado.\n");
    } else{
        printf("O valor foi encontrado na posição %d.\n", resultadoPesquisa+1);
    }
    return 0;
}