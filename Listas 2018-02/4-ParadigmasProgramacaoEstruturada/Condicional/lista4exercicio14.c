/*Escreva um algoritmo que leia um número n inteiro e escreva a soma
de todos os números de 1 até n*/

#include <stdio.h>

int main() {
    int N, soma, i;

    soma=0;

    printf("Declare um valor: \n");
    scanf("%d", &N);

    for (i=0; i<N; i++){
        soma = soma + i;
    }

    printf("A soma de todos os números de 1 até %d é %d", N, soma);

    return 0;
}