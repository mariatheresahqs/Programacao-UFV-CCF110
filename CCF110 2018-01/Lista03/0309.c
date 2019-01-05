#include <stdio.h>

int main() {
    int maior, tamanho, i;
    printf("Declare a quantidade de valores a serem analisados:\n");
    scanf("%d", &tamanho);
    int valor[tamanho];
    for(i=0;i<tamanho;i++){
        scanf("%d", &valor[i]);
    }
    maior =valor[0];
    for(i=0;i<tamanho;i++){
        if(valor[i]>maior){
            maior=valor[i];
        }
    }
    printf("O maior valor digitado foi: %d.\n", maior);
    return 0;
}