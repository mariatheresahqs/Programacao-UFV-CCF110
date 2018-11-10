#include <stdio.h>

int main() {
    float soma=0, i, impares=1, tamanho;
    tamanho = 50;
    for(i=1; i<=tamanho;i++){
        soma+= impares/i;
        impares+=2;
    }
    printf("O resultado da soma é: %.2f.\n", soma);


    return 0;
}
