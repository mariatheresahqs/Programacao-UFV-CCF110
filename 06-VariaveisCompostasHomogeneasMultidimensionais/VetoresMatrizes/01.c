#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 6;
    int vetorA[tamanho], i, soma=0;
    for(i=0;i<tamanho;i++){
        scanf("%d", &vetorA[i]);
        soma += vetorA[i];
    }
    printf("%d", soma);
    return 0;
}
