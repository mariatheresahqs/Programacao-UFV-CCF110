//Explique o que faz o programa abaixo

#include <stdio.h>

int main() {
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;//Ponteiro f recebe o valor do endereço do primeiro elemento do vetor
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++) {
        printf("\n");
        printf(" i = %d\n", i);// i = valores contidos no for: 0, 1, 2, 3, 4.
        printf(" vet[%d] = %.1f\n", i, vet[i]);// i conterá os valores do i(de 0 a 4), e vet[i] os valores, por índice, do vetor
        printf(" *(f + %d) = %.1f\n", i, *(f + i));//i conterá os valores do i(de 0 a 4), que serão acrescidos ao valor de endereço do vetor, e *(f + i) apresentará os valores respectivos ao índice do vetor
        printf(" &vet[%d] = %X\n", i, &vet[i]);//i conterá os valores do i(de 0 a 4), e &vet[i] apresentará o endereço das posições do vetor
        printf(" (f + %d) = %X\n", i, f + i);//i conterá os valores do i(de 0 a 4), 'f+i apresentará o endereço das posições do vetor
    }
    return 0;
}